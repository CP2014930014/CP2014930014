// 9. �迭�� �ִ밪�� �ε����� ��ȯ�ϴ� �Լ�

#include <stdio.h>
int returnIndex(int arr[], int length)
{
	int max = 0;
	int i;
	for (i=0; i<length; i++)
	{
		if (arr[i] > max)
			max = i;
	}
	return max;
}

int main()
{
	int a[] = {10, 20, 30, 40, 50};
	int len = 5;
	int m;

	m = returnIndex(a, len);
	printf("�迭�� �ִ밪�� �ε����� %d�Դϴ�.\n", m);
}