// 4. 정수 3개 중 제일 작은 정수를 반환하는 함수

#include <stdio.h>
int min(int x, int y, int z)
{
	int min;
	if (x >= y)
		min = y;
	else
		min = x;
	if (min >= z)
		min = z;
	return min;
}
int main()
{
	int x, y, z;
	printf("정수 x를 입력하세요 : ");
	scanf("%d", &x);
	printf("\n정수 y를 입력하세요 : ");
	scanf("%d", &y);
	printf("\n정수 z를 입력하세요 : ");
	scanf("%d", &z);
	printf("\n");

	int m;
	m = min(x, y, z);
	printf("이 중 가장 작은 수는 %d 입니다.\n", m);
}