/**
*˵����������ҵ03-2��������������С������
*������ţޱޱ
*ѧ�ţ�689
*�༶��8��
*���ڣ�2017-04-16
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
	int s;
	int i=1;
	printf("�������������������Զ��Ÿ�����");
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
	printf("������������С������Ϊ��%d\n",s);
	system("pause");
	return 0;
}
