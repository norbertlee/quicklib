#1.本文件及调用的Python文件为范例代码
#2.本文件及调用的库文件Quicklib CTP期货行情库和交易库遵循 开源协议GPL v3
#简单的说：对基于GPL v3协议的源代码，若个人或机构仅仅是自己使用，则可以闭源。
#若基于该开源代码，开发出程序或衍生产品用于商业行为则也必须开源。

#Quciklib Python框架和工具遵循GPL v3协议包括：
#（1）Quicklib CTP   期货行情库
#（2）Quicklib CTP   期货交易库
#（3）Quicklib CTP2  A股行情库
#（4）Quicklib MOM模式  博易资管交易库
#（用于接入资管投顾系统，MOM模式可实现私募进行投顾的选拔考核，并通过自己的风控系统接入实盘）

#Quciklib Python框架和工具暂不遵循开源协议包括：
#（5）Quicklib 监控器库（预警、监控、交易信号数据复制、跟单）（可免费试用）

#对Quciklib开源库做出贡献的，并得到原始作者肯定的，将公布在http://www.quciklib.cn网站上，
#并添加在《开源说明和感谢.txt》，并将该文件不断更新放入每一个新版本的Quicklib库里。

#原始作者：QQ 147423661 林(王登高)
#官方网站：http://www.quicklib.cn
#官方QQ群：5172183(1群)、25884087(2群)

# encoding: UTF-8

"""
该文件中包含的是交易平台的中间层，
将API和事件引擎包装到一个主引擎类中，便于管理。

当客户想采用服务器-客户机模式，实现交易功能放在托管机房，
而图形控制功能在本地电脑时，该主引擎负责实现远程通讯。
"""

import sys
from datetime import date
from time import sleep
import shelve

from PyQt4 import QtCore
 
from eventEngine import EventEngine


########################################################################
class MainEngine:
    """主引擎，负责对API的调度"""

    #----------------------------------------------------------------------
    def __init__(self):
        """Constructor"""
        self.ee = EventEngine()         # 创建事件驱动引擎
        
 
        self.ee.start()                 # 启动事件驱动引擎
        
        # 循环查询持仓和账户相关
        self.countGet = 0               # 查询延时计数
        self.lastGet = 'Account'        # 上次查询的性质
 
        
        # 合约储存相关
        self.dictInstrument = {}        # 字典（保存合约查询数据）
 
        
    #----------------------------------------------------------------------
  
    #----------------------------------------------------------------------
    def exit(self):
        """退出"""
        # 销毁API对象
        self.td = None
        self.md = None
        
        # 停止事件驱动引擎
        self.ee.stop()
        
 