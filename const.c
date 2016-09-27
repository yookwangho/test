#include <stdio.h>

int main(void)
{
	const double rate = 0.03;
	int deposit = 800000;
	printf("이자율:%f\n",rate);
	printf("계좌 잔고:%d\n",deposit);
	printf("이자액:%f\n",deposit*rate);

	char* str = "좋은 C 언어 입문서";
	char* const title = "진보된 C 언어";

	str = "최근 가장 좋은 C 언어 입문서";



	printf("\n%s; %s\n",str,title);
	return 0;
}