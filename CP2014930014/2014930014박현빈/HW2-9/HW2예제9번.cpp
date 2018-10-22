// 9. 위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니,
// 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.(입력의 유효성 검사)

#include <stdio.h>
int main()
{
	int n;

	while (1)
	{
		printf("1부터 9사이의 숫자 하나를 입력하세요 : ");
		scanf("%d", &n);
		if ( (n > 9) || (n < 1) )
		{
			printf("입력한 정수가 1부터 9사이의 숫자가 아닙니다. 다시 입력해주세요\n");
			continue;
		}
		else
			break;
	}
	printf("\n");

	for (int i=1; i<10; i++)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}
}