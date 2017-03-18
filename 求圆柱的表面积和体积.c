/**
说明：这是任务02_3
姓名：牛薇薇
学号：2016011689
班级：8班
日期：2017/03/18
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float r,h,s,v;
	printf("圆柱体底圆半径为：");
	scanf("%f",&r);
	printf("圆柱体的高度为：");
	scanf("%f",&h);
	s=2*3.14*r*r+2*r*3.14*h;
	v=3.14*r*r*h;
	printf("圆柱体面积为：%.2f\n",s);
	printf("圆柱体的体积为：%.2f\n",v);
	system("pause");
	return 0;
}