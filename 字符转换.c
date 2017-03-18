/**
说明：这是任务02_2
姓名：牛薇薇
学号：2016011689
班级：8班
日期：2017/03/18
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a,b,c;
	int x,y,z;
	printf("请输入三个小写字母（以空格隔开）：");
	scanf("%c %c %c",&a,&b,&c);
	x=a,y=b,z=c;
	printf("%d %d %d\n",x,y,z);
	x-=32;
	y-=32;
	z-=32;
	printf("%c %c %c\n",x,y,z);
	system("pause");
	return 0;
}