#include <stdio.h>

int main()
{
	// �ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a;

	printf("�ϳ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", a);
	else
		printf("%d�� Ȧ���Դϴ�.\n", a);
}