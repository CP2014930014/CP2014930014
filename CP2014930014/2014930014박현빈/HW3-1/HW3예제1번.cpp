// 1. 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수

#include <stdio.h>
// 함수 printNumber
// 입력 : 두 정수
// 출력 : 없음
// 부수효과 : 없음
void printNumber(int x, int y)
{
	int a, b;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;

	int i;
	for (i=a; i<=b; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
}
int main()
{
	int x, y;
	printf("정수 x를 입력하세요 : ");
	scanf("%d", &x);
	printf("\n정수 y를 입력하세요 : ");
	scanf("%d", &y);
	printf("\n");

	printNumber(x, y);
	printNumber(-20, 100);
	/*
	int a = 3, b = 50;
	int count = a;
	while (count <= b)
		printf("%d\n", count++);
	printf("End of program\n");
	*/
}