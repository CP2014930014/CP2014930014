// 17. 1���� 100������ ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int i;
	int sum = 0;

	for (i=1; i<=100; i++)
	{
		sum += i;
	}

	printf("1���� 100������ ���� %d �Դϴ�.\n", sum);
}