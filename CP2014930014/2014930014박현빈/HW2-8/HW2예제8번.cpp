// 8. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)

#include <stdio.h>
int main()
{
	int n;

	printf("1부터 9사이의 숫자 하나를 입력하세요 : ");
	scanf("%d", &n);

	printf("\n");
	if ( (n <= 9) && (n >= 1) )
	{
		for (int i=1; i<10; i++)
		{
			printf("%d * %d = %d\n", n, i, n*i);
		}
	}
}