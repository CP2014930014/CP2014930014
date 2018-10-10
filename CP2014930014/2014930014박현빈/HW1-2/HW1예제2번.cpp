#include <stdio.h>

int main()
{
	// 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.
	int a;

	printf("하나의 정수를 입력하시오 : ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d는 짝수입니다.\n", a);
	else
		printf("%d는 홀수입니다.\n", a);
}