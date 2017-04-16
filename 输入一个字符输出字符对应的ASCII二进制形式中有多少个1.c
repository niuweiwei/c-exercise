/**
*说明：这是作业03-1：求字符的对应的ASCII二进制形式中有多少个1
*姓名：牛薇薇
*学号：689
*班级：8班
*日期：2017-04-11
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	 char y;
	 int i=0;
	 int x;
	 printf("请输入一个字符：");
	 scanf("%c",&y);
	 x=(int)y;
	 if(x!=0)
	 {
		for(;(x/2)!=0;x=(x/2))
		{
			if((x%2)!=0)
			{
				i++;
			}
		}
		++i;/*当十进制转换成二进制一定是以1/2结尾，(x/2)=0时，会跳出循环，少加了一个1*/
		printf("该字符所对应的二进制中包含%d个1",i);
		system("pause");
		return 0;
		}
	 else
	 {
		 printf("该字符所对应的二进制中包含0个1");
		 system("pause");
		 return 0;
	 }
}