// 3. 두 정수 사이의 정수들 중 소수를 화면에 출력하는 함수

#include <stdio.h>
void primePrint(int x, int y)
{
	int a, b;
	int sum = 0;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;
	for (int num=a; num<=b; num++)
	{
		int i = 2;
		int isPrime = 1;
		while (i < num)
		{
			if (num%i == 0)
			{
				isPrime = 0;
				break;
			}
			i++;
		}
		if (isPrime)
			printf("%d\t", num);
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

	printf("%d부터 %d까지의 소수는 다음과 같습니다.\n", x, y);
	primePrint(x, y);
}