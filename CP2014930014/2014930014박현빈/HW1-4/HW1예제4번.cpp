#include <stdio.h>

int main()
{
	// ����(����)�� �Է� �޾Ƽ� ���(A, B, C, D, E)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	// (A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)
	int score;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score <= 100 && score >= 80)
		printf("����� ����� A�Դϴ�.\n");
	else if (score <= 79 && score >= 60)
		printf("����� ����� B�Դϴ�.\n");
	else if (score <= 59 && score >= 40)
		printf("����� ����� C�Դϴ�.\n");
	else if (score <= 39 && score >= 20)
		printf("����� ����� D�Դϴ�.\n");
	else if (score <= 19 && score >= 0)
		printf("����� ����� E�Դϴ�.\n");
	else
		printf("�Է��Ͻ� ������ �߸��� �����Դϴ�.\n");
}