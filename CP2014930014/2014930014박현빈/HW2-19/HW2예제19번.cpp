// 19. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int num;
	int isPrime = 1;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	int i=2;
	while (i < num) {
		if (num%i == 0) {
			isPrime = 0;
			break;
		}
		i++;
	}
	if (isPrime)
		printf("%d은 소수입니다.\n", num);
	else
		printf("%d은 소수가 아닙니다.\n", num);
}