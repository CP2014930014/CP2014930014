// 13. month�� day�� �Է� �޾�, 1�� 1�Ϻ����� �� day���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (switch�� ���)
// 1�� 20���� 20�� ���, 2�� 5���� 36�� ���. �� 2���� 28�Ϸ� ���.

#include <stdio.h>
int main()
{
	int d;
	int m;
	int doy = 0;

	printf("month�� �Է��ϼ��� : ");
	scanf("%d", &m);
	printf("day�� �Է��ϼ��� : ");
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

	printf("\n%d�� %d���� Day Of Year�� %d �Դϴ�.\n", m, d, doy);
}