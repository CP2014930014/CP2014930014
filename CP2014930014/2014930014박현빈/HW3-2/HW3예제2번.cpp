// 2. 두 정수 사이의 모든 정수들을 더해 그 결과를 반환하는 함수

#include <stdio.h>
int sum(int x, int y)
{
	int a, b;
	int sum = 0;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;
	for (int i=a; i<=b; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int x, y;
	printf("정수 x를 입력하세요 : ");
	scanf("%d", &x);
	printf("\n정수 y를 입력하세요 : ");
	scanf("%d", &y);
	printf("\n");

	int s;
	s = sum(x, y);
	printf("%d부터 %d까지의 합은 %d 입니다.\n", x, y, s);
}