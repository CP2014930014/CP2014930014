// 7. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

#include <stdio.h>
int main()
{
	int sum = 0;

	while (1)
	{
		int num;
		printf("정수 입력하세요 : ");
		scanf("%d", &num);
		sum += num;
		if (num == 0) break;
	}

	printf("\n입력한 정수들의 총합은 %d 입니다.\n", sum);
}