#include <ioCC2530.h>


#define uint unsigned int
#define uchar unsigned char

//������ƵƵĶ˿�
#define LED1 P1_0 //���� LED1 Ϊ P10 �ڿ���
#define LED2 P1_1 //���� LED2 Ϊ P11 �ڿ���
#define LED3 P0_4 //���� LED3 Ϊ P04 �ڿ���

void Delay(uint);  //��ʱ����
void InitIO(void); //��ʼ�� LED ���� IO �ں���


void main(void)
{
  InitIO();           
  while(1)           //��ѭ��
  {
    LED1 = !LED1;    // LED1 ����һ��
    Delay(200);
    LED2 = !LED2;    // LED2 ����һ��
    Delay(200);
    LED3 = !LED3;    // LED3 ����һ��
    Delay(200);
  }
}


void Delay(uint xms)
{
   uint i,j;
    for(i=xms;i>0;i--)
     for(j=587;j>0;j--);   
}


void InitIO(void)
{
  P1DIR |= 0x03;  //P10�� P11 ����Ϊ���
  P0DIR |= 0x10;  //P04����Ϊ���
  LED1 = 1;
  LED2 = 1;
  LED3 = 1;       //LED �Ƴ�ʼ��Ϊ��
}