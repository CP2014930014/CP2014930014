#include <stdio.h>

int main()
{
	// 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.
	int a, b;

	printf("정수 a를 입력하시오 : ");
	scanf("%d", &a);

	printf("정수 b를 입력하시오 : ");
	scanf("%d", &b);

	if (a > b)
		printf("%d이(가) 더 큰 수입니다.\n", a);
	else if(a < b)
		printf("%d이(가) 더 큰 수입니다.\n", b);
	else
		printf("두 수의 크기는 같습니다.\n");
}