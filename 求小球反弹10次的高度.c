/**
*˵����������ҵ03-2����С�򷴵�10�εĸ߶ȼ��������ܸ߶�
*������ţޱޱ
*ѧ�ţ�689
*�༶��8��
*���ڣ�2017-04-16
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
		printf("��%d�η����ĸ߶�Ϊ��%.6f\n",i,h);
	}
	printf("С�򷴵����ܸ߶�Ϊ��%.6f\n",s);
	system("pause");
	return 0;
}