// 18. 1���� 100���� 5�� ����� ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int i;
	int sum = 0;

	for (i=1; i<=100; i++)
	{
		if (i%5 == 0)
			sum += i;
	}

	printf("1���� 100���� 5�� ����� ���� %d �Դϴ�.\n", sum);
}