// 13. month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오. (switch문 사용)
// 1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.

#include <stdio.h>
int main()
{
	int d;
	int m;
	int doy = 0;

	printf("month를 입력하세요 : ");
	scanf("%d", &m);
	printf("day를 입력하세요 : ");
	scanf("%d", &d);


	switch (m)
	{
	case 1 :
		doy = d;
		break;
	case 2 :
		doy = 31 + d;
		break;
	case 3 :
		doy = 31 + 28 + d;
		break;
	case 4 :
		doy = 31*2 + 28 + d;
		break;
	case 5 :
		doy = 31*2 + 28 + 30 + d;
		break;
	case 6 :
		doy = 31*3 + 28 + 30 + d;
		break;
	case 7 :
		doy = 31*3 + 28 + 30*2 + d;
		break;
	case 8 :
		doy = 31*4 + 28 + 30*2 + d;
		break;
	case 9 :
		doy = 31*5 + 28 + 30*2 + d;
		break;
	case 10 :
		doy = 31*5 + 28 + 30*3 + d;
		break;
	case 11 :
		doy = 31*6 + 28 + 30*3 + d;
		break;
	case 12 :
		doy = 31*6 + 28 + 30*4 + d;
		break;
	default :
		break;
	}

	printf("\n%d월 %d일의 Day Of Year는 %d 입니다.\n", m, d, doy);
}