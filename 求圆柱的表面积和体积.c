/**
˵������������02_3
������ţޱޱ
ѧ�ţ�2016011689
�༶��8��
���ڣ�2017/03/18
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float r,h,s,v;
	printf("Բ�����Բ�뾶Ϊ��");
	scanf("%f",&r);
	printf("Բ����ĸ߶�Ϊ��");
	scanf("%f",&h);
	s=2*3.14*r*r+2*r*3.14*h;
	v=3.14*r*r*h;
	printf("Բ�������Ϊ��%.2f\n",s);
	printf("Բ��������Ϊ��%.2f\n",v);
	system("pause");
	return 0;
}