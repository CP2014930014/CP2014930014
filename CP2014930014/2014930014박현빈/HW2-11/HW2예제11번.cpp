// 11. 위의 문제를 0을 입력하기 전까지는 계속 수행(인수 출력)하도록 수정하시오.

#include <stdio.h>
int main()
{
	while (1)
	{
		int n;

		printf("양의 정수를 입력하시오 : ");
		scanf("%d", &n);
		if (n == 0)
		{
			printf("종료\n");
			break;
		}
		else
		{
			printf("\n%d =>\t", n);
			int i=2;
			while (i < n)
			{
				if (n%i==0)
				{
					printf("%d\t", i);
				}
				i++;
			}
			printf("\n\n");
		}
	}
}