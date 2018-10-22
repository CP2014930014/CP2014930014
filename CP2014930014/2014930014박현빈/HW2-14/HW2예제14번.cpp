// 14. 사용자로부터 숫자 하나를 입력받아, 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오.
// 입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.

#include <stdio.h>
int main()
{
	int num;
	int sum = 0;

	while (1)
	{
		printf("7보다 큰 숫자 하나를 입력하세요 : ");
		scanf("%d", &num);
		if (num <= 7)
		{
			printf("7보다 작은 숫자입니다. 다시 입력해주세요.\n");
			continue;
		}
		else break;
	}

	for (int i=7; i<=num; i++)
	{
		sum += i;
	}

	printf("\n7부터 %d까지 정수의 합은 %d 입니다.\n", num, sum);
}