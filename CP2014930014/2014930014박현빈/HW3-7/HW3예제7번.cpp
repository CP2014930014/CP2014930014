// 7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�

#include <stdio.h>
int addArray(int arr[], int length)
{
	int sum = 0;
	for (int i=0; i<length; i++)
		sum += arr[i];
	return sum;
}
int main()
{
	int a[] = { 10, 20, 30, 40 };
	int len = 4;

	int s;
	//int s = 0, index = 0;
	//while (index < length)
	//	sum += a[index++];
	s = addArray(a, len);
	printf("�迭�� ���� %d�Դϴ�.\n", s);
}