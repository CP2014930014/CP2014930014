// 4. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(for문 사용)

#include <stdio.h>
int main()
{
	int sum = 0;

	for (int i=1; i<=100; i++)
	{
		if (i%3 == 0)
		{
			sum += i;
			printf("%d\t", i);
		}
	}
	printf("\n1부터 100사이의 3의 배수들의 총합은 %d입니다.\n", sum);
}