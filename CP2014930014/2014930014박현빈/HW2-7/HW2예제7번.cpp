// 7. 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

#include <stdio.h>
int main()
{
	int sum = 0;

	while (1)
	{
		int num;
		printf("���� �Է��ϼ��� : ");
		scanf("%d", &num);
		sum += num;
		if (num == 0) break;
	}

	printf("\n�Է��� �������� ������ %d �Դϴ�.\n", sum);
}