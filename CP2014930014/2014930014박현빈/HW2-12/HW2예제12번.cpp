// 12. for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int n;
	int max;

	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	max = n;
	for (int i=0; 1; i++)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &n);
		if (n == 0)	break;
		else
		{
			if (n > max)
				max = n;
		}
	}

	printf("\n입력하신 정수 중 가장 큰 정수는 %d 입니다.\n", max);
}