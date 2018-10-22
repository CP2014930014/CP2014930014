// 2. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 1;

	while (i <= 10)
	{
		int a;
		printf("정수를 입력하시오 : ");
		scanf("%d", &a);
		sum += a;
		i++;
	}
	printf("\n입력한 정수들의 총합은 %d입니다.\n", sum);
}