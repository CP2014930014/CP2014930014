// 2. �� ���� ������ ��� �������� ���� �� ����� ��ȯ�ϴ� �Լ�

#include <stdio.h>
int sum(int x, int y)
{
	int a, b;
	int sum = 0;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;
	for (int i=a; i<=b; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int x, y;
	printf("���� x�� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("\n���� y�� �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("\n");

	int s;
	s = sum(x, y);
	printf("%d���� %d������ ���� %d �Դϴ�.\n", x, y, s);
}