// 1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�

#include <stdio.h>
void numPrint(int x, int y)
{
	int a, b;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;

	int i;
	for (i=a; i<=b; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");
}
int main()
{
	int x, y;
	printf("���� x�� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("\n���� y�� �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("\n");

	numPrint(x, y);
}