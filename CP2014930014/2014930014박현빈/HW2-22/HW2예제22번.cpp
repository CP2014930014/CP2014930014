// 22. ����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
// ����� �Է� 
// 3
// 2
// 4
// 8
// 0
//
// ���: 8

#include <stdio.h>
int main()
{
	int num;
	int max;

	printf("����� �Է�\n");
	scanf("%d", &num);
	max = num;

	while (1)
	{
		scanf("%d", &num);
		if (num == 0) break;
		else 
		{
			if (num > max)
				max = num;
		}
	}
	printf("\n�ִ밪 : %d\n", max);
}