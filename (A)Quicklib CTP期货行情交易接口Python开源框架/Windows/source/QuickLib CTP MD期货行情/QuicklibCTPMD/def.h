/*
1.本文件为Quicklib 期货行情库底层代码
2.本文件及调用的库文件Quicklib CTP期货行情库和交易库遵循 开源协议GPL v3
简单的说：对基于GPL v3协议的源代码，若个人或机构仅仅是自己使用，则可以闭源。
若基于该开源代码，开发出程序或衍生产品用于商业行为则也必须开源。

Quciklib Python框架和工具遵循GPL v3协议包括：
（1）Quicklib CTP   期货行情库
（2）Quicklib CTP   期货交易库
（3）Quicklib CTP2  A股行情库
（4）Quicklib MOM模式  博易资管交易库
（用于接入资管投顾系统，MOM模式可实现私募进行投顾的选拔考核，并通过自己的风控系统接入实盘）

Quciklib Python框架和工具暂不遵循开源协议包括：
（5）Quicklib 监控器库（预警、监控、交易信号数据复制、跟单）（可免费试用）

对Quciklib开源库做出贡献的，并得到原始作者肯定的，将公布在http://www.quciklib.cn网站上，
并添加在《开源说明和感谢.txt》，并将该文件不断更新放入每一个新版本的Quicklib库里。

原始作者：QQ 147423661 林(王登高)
官方网站：http://www.quicklib.cn
官方QQ群：5172183(1群)、25884087(2群)
*/
#pragma once

//周期定义
#define QL_ALL   10000  	// 所有周期
#define QL_M1    10001    	// M1   1分钟
#define QL_M3    10002  	    // M3   3分钟
#define QL_M5    10003  	    // M5   5分钟
#define QL_M10   10004  	// M10  10分钟
#define QL_M15   10005  	// M15  15分钟
#define QL_M30   10006  	// M30  30分钟
#define QL_M60   10007  	// M60  60分钟
#define QL_M120  10008  	// M120 120分钟
#define QL_M240  10009  	// M120 120分钟
#define QL_D1    10010  	    // D1   1日



// PRICE TYPE
#define QL_CLOSE  10010   // 收盘价
#define QL_OPEN   10011   // 开盘价
#define QL_HIGH   10012   // 最高价
#define QL_LOW    10013   // 最低价


// PRICE TYPE
#define QL_MA     10014   // 收盘价
#define QL_RSI    10015   // 开盘价
#define QL_SAR    10016   // 最高价
#define QL_MACD   10017   // 最低价
#define QL_CCI    10018   // 最低价
#define QL_ATI    10019   // 最低价



#define  MAX_TICK_NUM   60//120//60  //基本数据，之取第一个下标位0的元素，数量无所谓
#define  MAX_TICK_MOVE_NUM   59


#define  MAX_PURE_TICK_PERMIN_NUM   120 // 240//120  //每分钟TICK数60X2  //TICK数不足120如何处理统计？



/*

#define  max_pure_tick_num   130  //保存120TICK的买卖量 的数量
#define  max_pure_tick_move_num   129  //保存120TICK的买卖量 的数量

#define  max_pure_m1_num          480  //每1分钟 120TICK
#define  max_pure_m1_move_num     479  //每1分钟 120TICK

#define  max_pure_m3_num          361  //160  //每3分钟 360TICK
#define  max_pure_m3_move_num     360  //159  //每3分钟 360TICK

#define  max_pure_m5_num          96  //每3分钟 360TICK
#define  max_pure_m5_move_num     95 //每3分钟 360TICK

#define  max_pure_m10_num          96  //每3分钟 360TICK
#define  max_pure_m10_move_num     95 //每3分钟 360TICK

#define  max_pure_m15_num          96  //每3分钟 360TICK
#define  max_pure_m15_move_num     95 //每3分钟 360TICK

#define  max_pure_m30_num          96  //每3分钟 360TICK
#define  max_pure_m30_move_num     95 //每3分钟 360TICK

#define  max_pure_m60_num          96  //每3分钟 360TICK
#define  max_pure_m60_move_num     95 //每3分钟 360TICK

#define  max_pure_m120_num          96  //每3分钟 360TICK
#define  max_pure_m120_move_num     95 //每3分钟 360TICK

#define  max_pure_m240_num          96  //每3分钟 360TICK
#define  max_pure_m240_move_num     95 //每3分钟 360TICK

#define  max_pure_d1_num          30  //每3分钟 360TICK
#define  max_pure_d1_move_num     29 //每3分钟 360TICK

#define  max_pure_m480_num        100  //按每天8小时估算为480分钟
#define  max_pure_m480_move_num   99  //按每天8小时估算为480分钟
*/


extern int max_pure_tick_num;// = 130;  //保存120TICK的买卖量 的数量
extern int max_pure_tick_move_num;// = 129; //保存120TICK的买卖量 的数量

extern int max_pure_m1_num;//= 480;  //每1分钟 120TICK
extern int max_pure_m1_move_num;// = 479;  //每1分钟 120TICK

extern int max_pure_m3_num;// = 361;  //160  //每3分钟 360TICK
extern int max_pure_m3_move_num;// = 360;  //159  //每3分钟 360TICK

extern int max_pure_m5_num;// = 96;  //每3分钟 360TICK
extern int max_pure_m5_move_num;// = 95; //每3分钟 360TICK

extern int max_pure_m10_num;// = 96;  //每3分钟 360TICK
extern int max_pure_m10_move_num;// = 95; //每3分钟 360TICK

extern int  max_pure_m15_num;//= 96;  //每3分钟 360TICK
extern int  max_pure_m15_move_num;// = 95; //每3分钟 360TICK

extern int  max_pure_m30_num;// = 96;  //每3分钟 360TICK
extern int  max_pure_m30_move_num;// = 95; //每3分钟 360TICK

extern int  max_pure_m60_num;// = 96; //每3分钟 360TICK
extern int  max_pure_m60_move_num;// = 95; //每3分钟 360TICK

extern int  max_pure_m120_num;// = 96;  //每3分钟 360TICK
extern int  max_pure_m120_move_num;//= 95; //每3分钟 360TICK

extern int  max_pure_m240_num;//= 96;  //每3分钟 360TICK
extern int  max_pure_m240_move_num;// = 95;//每3分钟 360TICK

extern int  max_pure_d1_num;// = 30;  //每3分钟 360TICK
extern int  max_pure_d1_move_num;// = 29; //每3分钟 360TICK

extern int  max_pure_m480_num;// = 100;  //按每天8小时估算为480分钟
extern int  max_pure_m480_move_num;// = 99;  //按每天8小时估算为480分钟


//extern char	InstrumentID_n[TYPE_NUM][10];

#define MAX_USERNAME 33   //15
#define MAX_TRY_NUMBER 5  //5
#define MAX_ADDR_NUMBER 5
#define MAX_PACKET_SIZE 1024
#define SERVER_PORT 4567

#define  MAX_CROSSSINGLE_NUM   500
#define  MAX_CROSSSINGLE_MOVE_NUM   499
#define TYPE_NUM   20


#define TYPE_ARR_LEN 60  //应该等于所有品种宏的数量100000~1000059

#define  TYPE_NI   100000 //移位的下标开始
#define  TYPE_ZN   100001 //移位的下标开始
#define  TYPE_AL   100002 //移位的下标开始
#define  TYPE_CU   100003 //移位的下标开始
#define  TYPE_AU   100004 //移位的下标开始
#define  TYPE_AG   100005 //移位的下标开始
#define  TYPE_I    100006 //移位的下标开始
#define  TYPE_RU   100007 //移位的下标开始
#define  TYPE_TA   100008 //移位的下标开始
#define  TYPE_A    100009 //移位的下标开始
#define  TYPE_M    100010 //移位的下标开始
#define  TYPE_Y    100011 //移位的下标开始
#define  TYPE_P    100012 //移位的下标开始
#define  TYPE_RB   100013 //移位的下标开始
#define  TYPE_MA   100014 //移位的下标开始
#define  TYPE_PP   100015 //移位的下标开始
#define  TYPE_CS   100016 //移位的下标开始
#define  TYPE_JD   100017 //移位的下标开始
#define  TYPE_BU   100018 //移位的下标开始
#define  TYPE_FG   100019 //移位的下标开始
#define  TYPE_L    100020 //移位的下标开始
#define  TYPE_V    100021 //移位的下标开始
#define  TYPE_J    100022 //移位的下标开始

#define  TYPE_SR   100023 //移位的下标开始
#define  TYPE_RM   100024 //移位的下标开始
#define  TYPE_CF   100025 //移位的下标开始

#define  TYPE_C    100026 //移位的下标开始
#define  TYPE_WH   100027 //移位的下标开始
#define  TYPE_SM   100028 //移位的下标开始
#define  TYPE_SF   100029 //移位的下标开始


//增加的
#define  TYPE_PB   100030 //移位的下标开始
#define  TYPE_SN   100031 //移位的下标开始
#define  TYPE_WR   100032 //移位的下标开始
#define  TYPE_HC   100033 //移位的下标开始
#define  TYPE_FU   100034 //移位的下标开始
//增加的



#define  TYPE_IC   100035 //移位的下标开始
#define  TYPE_IF   100036 //移位的下标开始
#define  TYPE_IH   100037 //移位的下标开始

#define  TYPE_T    100038 //十国债
#define  TYPE_TF   100039 //五国债

#define  TYPE_NEW1    100040 
#define  TYPE_NEW2    100041
#define  TYPE_NEW3    100042
#define  TYPE_NEW4    100043
#define  TYPE_NEW5    100044
#define  TYPE_NEW6    100045
#define  TYPE_NEW7    100046
#define  TYPE_NEW8    100047
#define  TYPE_NEW9    100048
#define  TYPE_NEW10   100049
#define  TYPE_NEW11   100050
#define  TYPE_NEW12   100051 
#define  TYPE_NEW13   100052
#define  TYPE_NEW14   100053
#define  TYPE_NEW15   100054
#define  TYPE_NEW16   100055
#define  TYPE_NEW17   100056
#define  TYPE_NEW18   100057
#define  TYPE_NEW19   100058
#define  TYPE_NEW20   100059

/*
#define  TYPE_NEW21   10160 
#define  TYPE_NEW22   10161 
#define  TYPE_NEW23   10162 
#define  TYPE_NEW24   10163 
#define  TYPE_NEW25   10164 
#define  TYPE_NEW26   10165 
#define  TYPE_NEW27   10166 
#define  TYPE_NEW28   10167 
#define  TYPE_NEW29   10168 
#define  TYPE_NEW30   10169 
*/
//TThostFtdcDateExprType	TradingDay;								//交易日期

#pragma pack(8)

//typedef
struct GuestOnlineHash                      //定义节点
{
	//char name[8], address[20], num[11];
	//unsigned long key;
	int key;
	//int M;
	//int N;
	char InstrumentID[10];
	int  TYPEID;
	char	TickFileWritepaths[20];
	int  tick_VolumeLast;
	bool period_M1;
	bool period_M3;
	bool period_M5;
	bool period_M10;
	bool period_M15;
	bool period_M30;
	bool period_M60;
	bool period_M120;
	bool period_M240;
	bool period_D1;


	bool	ReceiveTick;
	bool	FristTick;
	bool	LastTick;

	//double	tick_data[10];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:基本信息
 
	//bool	LastTick;

	int avespace;
	int tradenum;

	int sort;//space/平均时间排名

			 //DWORD dwLastActiveTime;			 // 记录此用户的活动时间（服务器使用）
			 //DWORD LoginErrorTime;
			 //int LoginErrorNum;
	char keystr[MAX_USERNAME];	 // 用户名
								 //char checkcode[4];
								 //DWORD ip[30];  //6个字符+1位\0
								 //u_short port[6];  //6个字符+1位\0

	double nottime[5];
	double starttime[5];
	double endtime[5];

								 //CROSS的统计
	double	*M1_BS_CROSS_TOTAL_BIG_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_BIG_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_BIG_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_BIG_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double	*M1_BS_CROSS_TOTAL_MIDDLE_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_MIDDLE_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_MIDDLE_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_MIDDLE_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double	*M1_BS_CROSS_TOTAL_SMALL_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_SMALL_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_SMALL_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_SMALL_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };


	double	*M1_BS_CROSS_TOTAL_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_CROSS_TOTAL_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
														//CROSS的统计

	 double	tick_data[10];				//TICK基本数据
	 double	tick_AskPrice1[MAX_TICK_NUM];			//买一价
	 double	tick_BidPrice1[MAX_TICK_NUM];			//卖一价
	 double	tick_AskVolume1[MAX_TICK_NUM];		//买一量
	 double	tick_BidVolume1[MAX_TICK_NUM];		//卖一量
	 double	tick_Volume[MAX_TICK_NUM];			//成交量
	 double	tick_OpenInterest[MAX_TICK_NUM];		//持仓量



	 double	*tick_BS_BIG_BUY_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	 double	*tick_BS_BIG_SELL_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	 double	*tick_BS_BIG_PURE_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量

	 double	*tick_BS_BUY_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	 double	*tick_BS_SELL_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	 double	*tick_BS_PURE_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量


													// double	tick_BS_BUY_Time[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
													// double	tick_BS_SELL_Time[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*tick_BS_Time;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量

	double	*tick_BS_BL_Value;// = new double[max_pure_tick_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M1_BS_TOTAL_BIG_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_BIG_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_BIG_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_BIG_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double	*M1_BS_TOTAL_MIDDLE_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_MIDDLE_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_MIDDLE_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_MIDDLE_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double	*M1_BS_TOTAL_SMALL_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_SMALL_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_SMALL_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_SMALL_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };


	double	*M1_BS_TOTAL_PURE_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_SELL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_BUY_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	double	*M1_BS_TOTAL_BL_Value;// = new double[max_pure_m1_num];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double  *M1_open;// = new double[max_pure_m1_num];	//分钟K线开
	double  *M1_high;// = new double[max_pure_m1_num];	//分钟K线高
	double  *M1_low;// = new double[max_pure_m1_num];		//分钟K线低
	double  *M1_close;// = new double[max_pure_m1_num];	//分钟K线收
	bool	M1Klinesig;		//1分钟K线标志
	double	*M1_BS_Time;// = new double[max_pure_m1_num];


	double	*M1_BS_BIG_PURE_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_BIG_BUY_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_BIG_SELL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_BIG_BL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M1_BS_MIDDLE_PURE_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_MIDDLE_BUY_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_MIDDLE_SELL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_MIDDLE_BL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M1_BS_SMALL_PURE_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_SMALL_BUY_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_SMALL_SELL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_SMALL_BL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M1_BS_PURE_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_BUY_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_SELL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M1_BS_BL_Value;// = new double[max_pure_m1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例




												//3分钟
	double  *M3_open;// = new double[max_pure_m3_num];	//分钟K线开
	double  *M3_high;// = new double[max_pure_m3_num];	//分钟K线高
	double  *M3_low;// = new double[max_pure_m3_num];		//分钟K线低
	double  *M3_close;// = new double[max_pure_m3_num];	//分钟K线收
										//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M3_BS_Time;// = new double[max_pure_m3_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M3_BS_BIG_PURE_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_BIG_BUY_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_BIG_SELL_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_BIG_BL_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M3_BS_BUY_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_SELL_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_PURE_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M3_BS_BL_Value;// = new double[max_pure_m3_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
												//3分钟


												//5分钟
	double  *M5_open;// = new double[max_pure_m5_num];	//分钟K线开
	double  *M5_high;// = new double[max_pure_m5_num];	//分钟K线高
	double  *M5_low;// = new double[max_pure_m5_num];		//分钟K线低
	double  *M5_close;// = new double[max_pure_m5_num];	//分钟K线收
										//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M5_BS_Time;// = new double[max_pure_m5_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M5_BS_BIG_PURE_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_BIG_BUY_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_BIG_SELL_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_BIG_BL_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M5_BS_BUY_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_SELL_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_PURE_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M5_BS_BL_Value;// = new double[max_pure_m5_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
												//5分钟


												//10分钟
	double  *M10_open;// = new double[max_pure_m10_num];	//分钟K线开
	double  *M10_high;// = new double[max_pure_m10_num];	//分钟K线高
	double  *M10_low;// = new double[max_pure_m10_num];		//分钟K线低
	double  *M10_close;// = new double[max_pure_m10_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M10_BS_Time;// = new double[max_pure_m10_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M10_BS_BIG_PURE_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_BIG_BUY_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_BIG_SELL_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_BIG_BL_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M10_BS_BUY_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_SELL_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_PURE_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M10_BS_BL_Value;// = new double[max_pure_m10_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
												//10分钟

												//15分钟
	double  *M15_open;// = new double[max_pure_m15_num];	//分钟K线开
	double  *M15_high;// = new double[max_pure_m15_num];	//分钟K线高
	double  *M15_low;// = new double[max_pure_m15_num];		//分钟K线低
	double  *M15_close;// = new double[max_pure_m15_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M15_BS_Time;// = new double[max_pure_m15_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M15_BS_BIG_PURE_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_BIG_BUY_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_BIG_SELL_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_BIG_BL_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M15_BS_BUY_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_SELL_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_PURE_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M15_BS_BL_Value;// = new double[max_pure_m15_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
												//15分钟



												//30分钟
	double  *M30_open;// = new double[max_pure_m30_num];	//分钟K线开
	double  *M30_high;// = new double[max_pure_m30_num];	//分钟K线高
	double  *M30_low;// = new double[max_pure_m30_num];		//分钟K线低
	double  *M30_close;// = new double[max_pure_m30_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M30_BS_Time;// = new double[max_pure_m30_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M30_BS_BIG_PURE_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M30_BS_BIG_BUY_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double  *M30_BS_BIG_SELL_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M30_BS_BIG_BL_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M30_BS_BUY_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M30_BS_SELL_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M30_BS_PURE_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M30_BS_BL_Value;// = new double[max_pure_m30_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
												//30分钟


	//60分钟
	double  *M60_open;// = new double[max_pure_m60_num];	//分钟K线开
	double  *M60_high;// = new double[max_pure_m60_num];	//分钟K线高
	double  *M60_low;// = new double[max_pure_m60_num];		//分钟K线低
	double  *M60_close;// = new double[max_pure_m60_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M60_BS_Time;// = new double[max_pure_m60_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例
	double	*M60_BS_BIG_PURE_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_BIG_BUY_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_BIG_SELL_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_BIG_BL_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例


	double	*M60_BS_BUY_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_SELL_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_PURE_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖净量
	double	*M60_BS_BL_Value;// = new double[max_pure_m60_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存60个TICK数据,主动买卖拉升压力比例								
	//60分钟


	//120分钟
	double  *M120_open;// = new double[max_pure_m120_num];	//分钟K线开
	double  *M120_high;// = new double[max_pure_m120_num];	//分钟K线高
	double  *M120_low;// = new double[max_pure_m120_num];		//分钟K线低
	double  *M120_close;// = new double[max_pure_m120_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M120_BS_Time;// = new double[max_pure_m120_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例
	double	*M120_BS_BIG_PURE_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_BIG_BUY_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_BIG_SELL_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_BIG_BL_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例


	double	*M120_BS_BUY_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_SELL_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_PURE_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M120_BS_BL_Value;// = new double[max_pure_m120_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例								
	//120分钟

	//240分钟
	double  *M240_open;// = new double[max_pure_m240_num];	//分钟K线开
	double  *M240_high;// = new double[max_pure_m240_num];	//分钟K线高
	double  *M240_low;// = new double[max_pure_m240_num];		//分钟K线低
	double  *M240_close;// = new double[max_pure_m240_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*M240_BS_Time;// = new double[max_pure_m240_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例
	double	*M240_BS_BIG_PURE_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_BIG_BUY_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_BIG_SELL_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_BIG_BL_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例


	double	*M240_BS_BUY_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_SELL_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_PURE_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*M240_BS_BL_Value;// = new double[max_pure_m240_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例								
	 //240分钟


	 //240分钟
	double  *D1_open;// = new double[max_pure_d1_num];	//分钟K线开
	double  *D1_high;// = new double[max_pure_d1_num];	//分钟K线高
	double  *D1_low;// = new double[max_pure_d1_num];		//分钟K线低
	double  *D1_close;// = new double[max_pure_d1_num];	//分钟K线收
											//	bool	M3Klinesig[20];		//3分钟K线标志
	double	*D1_BS_Time;// = new double[max_pure_d1_num];
	// double	M3_BS_BUY_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_SELL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_PURE_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	// double	M3_BS_BL_Value[20][MAX_TICK_NUM];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例
	double	*D1_BS_BIG_PURE_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_BIG_BUY_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_BIG_SELL_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_BIG_BL_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例


	double	*D1_BS_BUY_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_SELL_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_PURE_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖净量
	double	*D1_BS_BL_Value;// = new double[max_pure_d1_num];	//	= { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//行情数据:保存个TICK数据,主动买卖拉升压力比例								
													//240分钟

	double  Day_open[60];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//日K线数据开 
	double  Day_high[60];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//日K线数据高
	double  Day_low[60];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//日K线数据低
	double  Day_close[60];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };		//日K线数据收


	int EmaCount;
	//int si;     //查找长度
	//PEER_RECORD_INFO deallist;
	//ADDR_RADER_INFO addr[MAX_ADDR_NUMBER]; // 由节点的私有终端和公共终端组成的数组
	//u_char AddrNum;					 // addr数组元素数量
	//ADDR_RADER_INFO p2pAddr;				 // P2P通信时应使用的地址（客户方使用）
	//char oncehash[7];

	//enum  entry_status states;

	int PositionAmount[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //持仓方向，数量

	int LastTurn[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //新增加
	double LastTurnTime[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //新增加


	int LastCount[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //新增加
							//double LastTurnTime[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //新增加


	double LastStopTime[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //新增

								  //int CROSS_SINGLE_SELECT[TYPE_NUM][MAX_CROSSSINGLE_NUM];   //保存信号方向 0空，1空  2多
								  //double CROSS_SINGLE_TIME[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //新增



	bool LockState[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };




	double	LastHighPrice[TYPE_NUM];  //动态止损，保存最高价
	double	LastLowPrice[TYPE_NUM];   //动态止损，保存最低价

	double DynamicStopLossTime[TYPE_NUM]; //动态止损计时

	double open[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间价格
	double close[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间价格
	double high[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间价格
	double low[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间价格

											  //int CROSS_SINGLE_TURN[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //新增,信号方向和手数1，2，3，-1，-2，-3

											  //double CROSS_SINGLE_PRICE[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间价格
											  //double CROSS_SINGLE_SPACE_VALUE[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间空间
											  //double CROSS_SINGLE_SPACE_RATE[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //保存信号之间波动空间率，应该大于3才运作

											  //double CROSS_SINGLE_SPACE_PER_M1[TYPE_NUM][MAX_CROSSSINGLE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };	  //折合成每分钟信号之间平均波动空间率，应该大于3才运作


											  //double EMA_SPACE_M[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  // 该M的EMA空间
											  //double EMA_SPACE_N[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  // 该N的EMA空间

											  //double EMA_SPACE_MN[TYPE_NUM];// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };// 该MN的EMA 平均空间
											  //PEER_INFO   OrderUserPeerList;  // 订购该操盘手的用户列表;



 



	
};
//*HashGuestOnlineNode2;


#pragma pack()