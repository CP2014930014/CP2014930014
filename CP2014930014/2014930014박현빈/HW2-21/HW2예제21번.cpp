// 21. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	for (int i=2; i<=num; i++)
	{
		int j=2;
		int isPrime=1;
		while (j < i)
		{
			if (i%j == 0)
			{
				isPrime = 0;
				break;
			}
			j++;
		}
		if(isPrime)
			sum += i;
	}
	printf("%d 이하의 숫자 중 소수들의 합은 %d 입니다.\n", num, sum);
}