/**
˵������������02_2
������ţޱޱ
ѧ�ţ�2016011689
�༶��8��
���ڣ�2017/03/18
**/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a,b,c;
	int x,y,z;
	printf("����������Сд��ĸ���Կո��������");
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