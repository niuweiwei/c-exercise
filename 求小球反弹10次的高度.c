/**
*说明：这是作业03-2：求小球反弹10次的高度及反弹的总高度
*姓名：牛薇薇
*学号：689
*班级：8班
*日期：2017-04-16
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h=100;
	int i=1;
	float s=0;
	for(;i<=10;i++)
	{
		h=h/2.0;
		s=s+h;
		printf("第%d次反弹的高度为：%.6f\n",i,h);
	}
	printf("小球反弹的总高度为：%.6f\n",s);
	system("pause");
	return 0;
}