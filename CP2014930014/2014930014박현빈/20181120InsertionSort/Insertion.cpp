#include <stdio.h>
void printArray(int* arr, int len)	// ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
{
	for(int index=0; index<len; index++)
		printf("array[%d] is %d\n", index, arr[index]);
}
void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
// �Լ� : insertElement()
// �Է� : �迭(�迭�̸�, �迭����)
// ��� : ����
// �μ�ȿ�� : �迭�� element��ұ��� ���ĵ�
void insertElement(int* arr, int element)
{
	while (element>0)
	{
		if (arr[element-1] > arr[element])
		{
			swapElement(arr, element-1, element);
		}
		else break;
		element--;
	}
}
// �Լ� : insertionSort()
// �Է� : �迭, 
// ��� : ����
// �μ�ȿ�� : �迭�� ���ĵ�.
void insertionSort(int* arr, int length)
{
	for (int i=1; i<length; i++)
		insertElement(arr, i);
}
int main()
{
	int a[] = { 37, 42, 45, 50, 40 };

	insertionSort(a, 5);
	printArray(a, 5);
}