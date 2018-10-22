// 22. 사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.
//
// 사용자 입력 
// 3
// 2
// 4
// 8
// 0
//
// 결과: 8

#include <stdio.h>
int main()
{
	int num;
	int max;

	printf("사용자 입력\n");
	scanf("%d", &num);
	max = num;

	while (1)
	{
		scanf("%d", &num);
		if (num == 0) break;
		else 
		{
			if (num > max)
				max = num;
		}
	}
	printf("\n최대값 : %d\n", max);
}