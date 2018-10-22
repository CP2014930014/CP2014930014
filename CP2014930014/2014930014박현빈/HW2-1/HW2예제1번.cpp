// 1. 1부터 10까지 연속 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
	int num = 1;
	
	while (num <= 10)
	{
		printf("%d\n", num++);
	}
}