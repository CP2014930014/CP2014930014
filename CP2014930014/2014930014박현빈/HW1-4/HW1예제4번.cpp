#include <stdio.h>

int main()
{
	// 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.
	// (A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)
	int score;
	
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 80)
		printf("당신의 등급은 A입니다.\n");
	else if (score <= 79 && score >= 60)
		printf("당신의 등급은 B입니다.\n");
	else if (score <= 59 && score >= 40)
		printf("당신의 등급은 C입니다.\n");
	else if (score <= 39 && score >= 20)
		printf("당신의 등급은 D입니다.\n");
	else if (score <= 19 && score >= 0)
		printf("당신의 등급은 E입니다.\n");
	else
		printf("입력하신 점수는 잘못된 점수입니다.\n");
}