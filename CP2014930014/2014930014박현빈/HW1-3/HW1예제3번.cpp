#include <stdio.h>

int main()
{
	// 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.
	int a, b, c;

	printf("세 정수를 차례대로 입력해주세요.\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
			printf("가장 큰 수는 %d이다.\n", a);
		else
			printf("가장 큰 수는 %d이다.\n", c);
	}
	else
	{
		if (b > c)
			printf("가장 큰 수는 %d이다.\n", b);
		else
			printf("가장 큰 수는 %d이다.\n", c);
	}
}