// 2. 10���� ������ �Է� �޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 1;

	while (i <= 10)
	{
		int a;
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &a);
		sum += a;
		i++;
	}
	printf("\n�Է��� �������� ������ %d�Դϴ�.\n", sum);
}