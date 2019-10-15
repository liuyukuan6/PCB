
#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "temp.h"	
#include "lcd.h"
#include<intrins.h>

#define uchar unsigned char
#define uint  unsigned int
uchar PuZh[36] = "on";
float tmp;
float temp;
float tp;
uchar DisplayData[8];

//--定义使用的IO--//
 
sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;
sbit led4 = P2^3;
sbit led5 = P2^4;
sbit led6 = P2^5;
sbit led7 = P2^6;
sbit led8 = P2^7;
 
 
//--声明全局函数--//   
void UsartConfiguration();
void Delay_1ms(uint i);
/********************************************************************
* 名称 : Com_Int()
* 功能 : 串口中断子函数
* 输入 : 无 * 输出 : 无
***********************************************************************/
void Com_Int(void) interrupt 4
{
	uchar i;
  uchar receive_data;
	
  EA = 0;
	
  if(RI == 1) //当硬件接收到一个数据时，RI会置位
	{ 		
		RI = 0;
		receive_data = SBUF;//接收到的数据
			
		if(receive_data == '9')	
		{ tmp=26;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '8')	 
		{ tmp=25;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
else if(receive_data == '7')	 
		{ tmp=24;
       if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '6') 
		{ tmp=23;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '5')	 
		{ tmp=22;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '4')	 
		{ tmp=21;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '3') 
		{ tmp=20;
       if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else if(receive_data == '2')	 
		{ tmp=18;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
		else if(receive_data == '1')	 
		{ tmp=16;
      if(tp>tmp){
			led1 = 0;//接收到1亮灯
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else
		{
			led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
		}
	}
	else{
		led1 = 1;
			led2 = 1;
			led3 = 1;
			led4 = 1;
			led5 = 1;
			led6 = 1;
			led7 = 1;
			led8 = 1;
	}
}
		
		for(i=0; i<36; i++)
		{
			SBUF = PuZh[i];   //将要发送的数据放入到发送寄存器
			while(!TI);		    //等待发送数据完成
			TI=0;			        //清除发送完成标志位
			Delay_1ms(1);
		}
		EA = 1;
}

/*******************************************************************************
* 函 数 名       : UsartConfiguration()
* 函数功能		   : 设置串口
* 输    入       : 无
* 输    出       : 无
*******************************************************************************/
 
void UsartConfiguration()
{	
	SCON=0X50;			//设置为工作方式1,8位数据，可变波特率
	TMOD=0X20;			//设置计数器工作方式2
	PCON=0X00;			//波特率不加倍
	TH1=0XFd;		    //计数器初始值设置，9600@11.0592MHz
	TL1=0XFd;
	TR1=1;					//打开计数器
	ES = 1;         //开串口中断
  EA = 1;         //开总中断
}
 
 
/********************************************************************
* 名称 : Delay_1ms()
* 功能 : 延时子程序，延时时间为 1ms
* x * 输入 : x (延时一毫秒的个数)
* 输出 : 无
***********************************************************************/
void Delay_1ms(uint i)//1ms延时
{
  uchar x,j;
  
  for(j=0;j<i;j++)
    for(x=0;x<=148;x++);
}

/*******************************************************************************
* 函 数 名         : datapros()
* 函数功能		   : 温度读取处理转换函数
* 输    入         : temp
* 输    出         : 无
*******************************************************************************/

void datapros(temp) 	 
{
	if(temp< 0)				//当温度值为负数
  	{
		LcdWriteCom(0x80);	 //   -
		LcdWriteData('-');  
		//因为读取的温度是实际温度的补码，所以减1，再取反求出原码
		temp=temp-1;
		temp=~temp;
		tp=temp;
		temp=tp*0.0625*100+0.5;	
		//留两个小数点就*100，+0.5是四舍五入，因为C语言浮点数转换为整型的时候把小数点
		//后面的数自动去掉，不管是否大于0.5，而+0.5之后大于0.5的就是进1了，小于0.5的就
		//算加上0.5，还是在小数点后面。
 
  	}
 	else
  	{			
		LcdWriteCom(0x80);		//写地址 80表示初始地址
	    LcdWriteData('+'); 		//显示正
		tp=temp;//因为数据处理有小数点所以将温度赋给一个浮点型变量
		//如果温度是正的那么，那么正数的原码就是补码它本身
		temp=tp*0.0625*100+0.5;	
		//留两个小数点就*100，+0.5是四舍五入，因为C语言浮点数转换为整型的时候把小数点
		//后面的数自动去掉，不管是否大于0.5，而+0.5之后大于0.5的就是进1了，小于0.5的就
		//算加上0.5，还是在小数点后面。
	}
	DisplayData[1] =temp / 10000;
	DisplayData[2] =temp % 10000 / 1000;
	DisplayData[3] =temp % 1000 / 100;
	DisplayData[4] =temp % 100 / 10;
	DisplayData[5] =temp % 10;
}


/*******************************************************************************
* 函数名         :DigDisplay()
* 函数功能		 :数码管显示函数
* 输入           : 无
* 输出         	 : 无
*******************************************************************************/
void DigDisplay()
{
	LcdWriteCom(0x82);		  //写地址 80表示初始地址
	LcdWriteData('0'+DisplayData[1]); //百位 
	LcdWriteCom(0x83);		  //写地址 80表示初始地址
	LcdWriteData('0'+DisplayData[2]); //十位 
	LcdWriteCom(0x84);		  //写地址 80表示初始地址
	LcdWriteData('0'+DisplayData[3]); //个位 
	LcdWriteCom(0x85);		  //写地址 80表示初始地址
	LcdWriteData('.'); //百位 
	LcdWriteCom(0x86);		  //写地址 80表示初始地址
	LcdWriteData('0'+DisplayData[4]); //百位 
	LcdWriteCom(0x87);		  //写地址 80表示初始地址
	LcdWriteData('0'+DisplayData[5]); //百位 
}

/*******************************************************************************
* 函 数 名       : main
* 函数功能		 : 主函数
* 输    入       : 无
* 输    出    	 : 无
*******************************************************************************/
void main()
{	
	LcdInit();			 //初始化LCD1602
	LcdWriteCom(0x88);	//写地址 80表示初始地址
	LcdWriteData('C'); 
	UsartConfiguration();
	while(1)
	{
		datapros(Ds18b20ReadTemp());	 //数据处理函数
		DigDisplay();//数码管显示函数		
	}	;
 
}

