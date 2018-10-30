// 5. n단의 구구단을 화면에 출력하는 함수

#include <stdio.h>
void printMul(int x)
{
	for (int i=1; i<=9; i++)
		printf("%d * %d = %d\n", x, i, x*i);
}
int main()
{
	int n;
	
	printf("정수 n를 입력하세요 : ");
	scanf("%d", &n);

	printf("%d단의 구구단은 아래와 같습니다.\n", n);
	printMul(n);
}