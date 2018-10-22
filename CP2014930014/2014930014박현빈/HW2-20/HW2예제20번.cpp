// 20. 100 이하의 소수를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int num;
	for (num=2; num<=100; num++)
	{
		int i=2, isPrime=1;
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