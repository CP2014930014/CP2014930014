// 12. for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int n;
	int max;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	max = n;
	for (int i=0; 1; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &n);
		if (n == 0)	break;
		else
		{
			if (n > max)
				max = n;
		}
	}

	printf("\n�Է��Ͻ� ���� �� ���� ū ������ %d �Դϴ�.\n", max);
}