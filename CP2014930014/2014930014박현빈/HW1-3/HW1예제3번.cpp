#include <stdio.h>

int main()
{
	// �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a, b, c;

	printf("�� ������ ���ʴ�� �Է����ּ���.\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
			printf("���� ū ���� %d�̴�.\n", a);
		else
			printf("���� ū ���� %d�̴�.\n", c);
	}
	else
	{
		if (b > c)
			printf("���� ū ���� %d�̴�.\n", b);
		else
			printf("���� ū ���� %d�̴�.\n", c);
	}
}