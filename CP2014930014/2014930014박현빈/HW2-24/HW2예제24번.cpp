// 사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.
//사용자 입력: 4
// *
// ***
// *****
// *******

#include <stdio.h>
int main()
{
	int num;
	printf("사용자 입력 : ");
	scanf("%d", &num);

	for (int i=1; i<=num; i++)
	{
		for (int j=0; j<2*i-1; j++)
			printf("*");
		printf("\n");
	}
}