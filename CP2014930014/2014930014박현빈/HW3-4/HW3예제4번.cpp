// 4. ���� 3�� �� ���� ���� ������ ��ȯ�ϴ� �Լ�

#include <stdio.h>
int min(int x, int y, int z)
{
	int min;
	if (x >= y)
		min = y;
	else
		min = x;
	if (min >= z)
		min = z;
	return min;
}
int main()
{
	int x, y, z;
	printf("���� x�� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("\n���� y�� �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("\n���� z�� �Է��ϼ��� : ");
	scanf("%d", &z);
	printf("\n");

	int m;
	m = min(x, y, z);
	printf("�� �� ���� ���� ���� %d �Դϴ�.\n", m);
}