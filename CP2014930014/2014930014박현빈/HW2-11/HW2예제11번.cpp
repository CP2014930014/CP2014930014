// 11. ���� ������ 0�� �Է��ϱ� �������� ��� ����(�μ� ���)�ϵ��� �����Ͻÿ�.

#include <stdio.h>
int main()
{
	while (1)
	{
		int n;

		printf("���� ������ �Է��Ͻÿ� : ");
		scanf("%d", &n);
		if (n == 0)
		{
			printf("����\n");
			break;
		}
		else
		{
			printf("\n%d =>\t", n);
			int i=2;
			while (i < n)
			{
				if (n%i==0)
				{
					printf("%d\t", i);
				}
				i++;
			}
			printf("\n\n");
		}
	}
}