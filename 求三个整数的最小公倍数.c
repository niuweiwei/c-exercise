/**
*说明：这是作业03-2：求三个数的最小公倍数
*姓名：牛薇薇
*学号：689
*班级：8班
*日期：2017-04-16
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
	int s;
	int i=1;
	printf("请输入三个整数：（以逗号隔开）");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>=b)
	{
		s=a;
	}
	else
	{
		s=b;
	}
	if(s<c);
	{
		s=c;
	}
	while((s%a!=0)||(s%b!=0)||(s%c!=0))
	{
		i++;
		s=i*s;
	}
	printf("这三个数的最小公倍数为：%d\n",s);
	system("pause");
	return 0;
}
