
#include "reg52.h"			 //���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���
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

//--����ʹ�õ�IO--//
 
sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;
sbit led4 = P2^3;
sbit led5 = P2^4;
sbit led6 = P2^5;
sbit led7 = P2^6;
sbit led8 = P2^7;
 
 
//--����ȫ�ֺ���--//   
void UsartConfiguration();
void Delay_1ms(uint i);
/********************************************************************
* ���� : Com_Int()
* ���� : �����ж��Ӻ���
* ���� : �� * ��� : ��
***********************************************************************/
void Com_Int(void) interrupt 4
{
	uchar i;
  uchar receive_data;
	
  EA = 0;
	
  if(RI == 1) //��Ӳ�����յ�һ������ʱ��RI����λ
	{ 		
		RI = 0;
		receive_data = SBUF;//���յ�������
			
		if(receive_data == '9')	
		{ tmp=26;
      if(tp>tmp){
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			led1 = 0;//���յ�1����
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
			SBUF = PuZh[i];   //��Ҫ���͵����ݷ��뵽���ͼĴ���
			while(!TI);		    //�ȴ������������
			TI=0;			        //���������ɱ�־λ
			Delay_1ms(1);
		}
		EA = 1;
}

/*******************************************************************************
* �� �� ��       : UsartConfiguration()
* ��������		   : ���ô���
* ��    ��       : ��
* ��    ��       : ��
*******************************************************************************/
 
void UsartConfiguration()
{	
	SCON=0X50;			//����Ϊ������ʽ1,8λ���ݣ��ɱ䲨����
	TMOD=0X20;			//���ü�����������ʽ2
	PCON=0X00;			//�����ʲ��ӱ�
	TH1=0XFd;		    //��������ʼֵ���ã�9600@11.0592MHz
	TL1=0XFd;
	TR1=1;					//�򿪼�����
	ES = 1;         //�������ж�
  EA = 1;         //�����ж�
}
 
 
/********************************************************************
* ���� : Delay_1ms()
* ���� : ��ʱ�ӳ�����ʱʱ��Ϊ 1ms
* x * ���� : x (��ʱһ����ĸ���)
* ��� : ��
***********************************************************************/
void Delay_1ms(uint i)//1ms��ʱ
{
  uchar x,j;
  
  for(j=0;j<i;j++)
    for(x=0;x<=148;x++);
}

/*******************************************************************************
* �� �� ��         : datapros()
* ��������		   : �¶ȶ�ȡ����ת������
* ��    ��         : temp
* ��    ��         : ��
*******************************************************************************/

void datapros(temp) 	 
{
	if(temp< 0)				//���¶�ֵΪ����
  	{
		LcdWriteCom(0x80);	 //   -
		LcdWriteData('-');  
		//��Ϊ��ȡ���¶���ʵ���¶ȵĲ��룬���Լ�1����ȡ�����ԭ��
		temp=temp-1;
		temp=~temp;
		tp=temp;
		temp=tp*0.0625*100+0.5;	
		//������С�����*100��+0.5���������룬��ΪC���Ը�����ת��Ϊ���͵�ʱ���С����
		//��������Զ�ȥ���������Ƿ����0.5����+0.5֮�����0.5�ľ��ǽ�1�ˣ�С��0.5�ľ�
		//�����0.5��������С������档
 
  	}
 	else
  	{			
		LcdWriteCom(0x80);		//д��ַ 80��ʾ��ʼ��ַ
	    LcdWriteData('+'); 		//��ʾ��
		tp=temp;//��Ϊ���ݴ�����С�������Խ��¶ȸ���һ�������ͱ���
		//����¶���������ô����ô������ԭ����ǲ���������
		temp=tp*0.0625*100+0.5;	
		//������С�����*100��+0.5���������룬��ΪC���Ը�����ת��Ϊ���͵�ʱ���С����
		//��������Զ�ȥ���������Ƿ����0.5����+0.5֮�����0.5�ľ��ǽ�1�ˣ�С��0.5�ľ�
		//�����0.5��������С������档
	}
	DisplayData[1] =temp / 10000;
	DisplayData[2] =temp % 10000 / 1000;
	DisplayData[3] =temp % 1000 / 100;
	DisplayData[4] =temp % 100 / 10;
	DisplayData[5] =temp % 10;
}


/*******************************************************************************
* ������         :DigDisplay()
* ��������		 :�������ʾ����
* ����           : ��
* ���         	 : ��
*******************************************************************************/
void DigDisplay()
{
	LcdWriteCom(0x82);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('0'+DisplayData[1]); //��λ 
	LcdWriteCom(0x83);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('0'+DisplayData[2]); //ʮλ 
	LcdWriteCom(0x84);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('0'+DisplayData[3]); //��λ 
	LcdWriteCom(0x85);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('.'); //��λ 
	LcdWriteCom(0x86);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('0'+DisplayData[4]); //��λ 
	LcdWriteCom(0x87);		  //д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('0'+DisplayData[5]); //��λ 
}

/*******************************************************************************
* �� �� ��       : main
* ��������		 : ������
* ��    ��       : ��
* ��    ��    	 : ��
*******************************************************************************/
void main()
{	
	LcdInit();			 //��ʼ��LCD1602
	LcdWriteCom(0x88);	//д��ַ 80��ʾ��ʼ��ַ
	LcdWriteData('C'); 
	UsartConfiguration();
	while(1)
	{
		datapros(Ds18b20ReadTemp());	 //���ݴ�����
		DigDisplay();//�������ʾ����		
	}	;
 
}

