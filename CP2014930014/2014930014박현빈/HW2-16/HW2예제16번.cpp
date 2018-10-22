// 16. 한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.
// 사용자 입력 : 한 개의 정수 
// 출력 : 자릿수의 개수

#include <stdio.h>
int main()
{
	int num;
	int a = 1;

	printf("사용자 입력 : ");
	scanf("%d", &num);

	if (num > 10)
	{
		for (num; num>=10;)
		{
			num = num/10;
			a++;
		}
		printf("자릿수 : %d\n", a);
	}
	else
		printf("자릿수 : %d\n", a);
}