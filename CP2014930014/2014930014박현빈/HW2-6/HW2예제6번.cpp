// 6. 어떤 양의 정수(n)를 입력 받아(만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 그 수의 2n을 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int n;

	while (1)
	{
		printf("정수 입력하세요 : ");
		scanf("%d", &n);
		if (n > 0) break;
		if (n <= 0)
		{
			printf("입력한 정수가 0과 같거나 작습니다. 다시 입력해주세요\n");
			continue;
		}
	}
	
	printf("\n입력한 양의 정수의 2n 값은 %d 입니다.\n", 2*n);
}