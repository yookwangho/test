#include <stdio.h>

int main(void)
{
	const double rate = 0.03;
	int deposit = 800000;
	printf("������:%f\n",rate);
	printf("���� �ܰ�:%d\n",deposit);
	printf("���ھ�:%f\n",deposit*rate);

	char* str = "���� C ��� �Թ���";
	char* const title = "������ C ���";

	str = "�ֱ� ���� ���� C ��� �Թ���";



	printf("\n%s; %s\n",str,title);
	return 0;
}