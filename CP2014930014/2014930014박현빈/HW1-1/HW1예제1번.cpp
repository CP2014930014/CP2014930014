#include <stdio.h>

int main()
{
	// �� ��(����)�� �Է� �޾�, �� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a, b;

	printf("���� a�� �Է��Ͻÿ� : ");
	scanf("%d", &a);

	printf("���� b�� �Է��Ͻÿ� : ");
	scanf("%d", &b);

	if (a > b)
		printf("%d��(��) �� ū ���Դϴ�.\n", a);
	else if(a < b)
		printf("%d��(��) �� ū ���Դϴ�.\n", b);
	else
		printf("�� ���� ũ��� �����ϴ�.\n");
}