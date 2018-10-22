// 10. 소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
// 8 => 2 4 
// 12 => 2 3 4 6

#include <stdio.h>
int main()
{
	int n;

	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &n);

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
	printf("\n");
}