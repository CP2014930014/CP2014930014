#include <stdio.h>
// �Լ� : findMinIndex()
// �Է� : �迭(�迭�̸�, �迭����)
// ��� : �ּҰ��� �ε���
// �μ�ȿ�� : ����
int findMinIndex(int* arr, int index, int length)
{
	int i;
	int minIndex = index;

	for (i=index; i<length; i++)
	{
		if (arr[minIndex] > arr[i])
			minIndex = i;
	}

	return minIndex;
}

// �Լ� : swapElement()
// �Է� : �迭(�迭�̸�, �� ���� �ε���)
// ��� : ����
// �μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// �Լ� : findMin()
// �Է� : �迭(�迭�̸�, �迭����)
// ��� : �迭�� �ּҰ�
int findMin(int* arr, int length)
{
	int min = arr[0];
	for (int i=1; i<length; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	return min;
}

void printArray(int* arr, int len)	// ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
{
	for(int index=0; index<len; index++)
		printf("array[%d] is %d\n", index, arr[index]);
}

// �Լ� : selectionSort()
// �Է� : �迭
// ��� : ����
// �μ�ȿ�� : �迭�� ���ĵ�.
// findMin �����ϳ� �� �÷��� �غ���
void selectionSort(int* arr, int length)
{
	int minIndex;
	for (int i=0; i<length; i++)
	{
		minIndex = findMinIndex(arr, i, length);
		swapElement(arr, i, minIndex);
	}
}

int main()
{

	int a[] = { 30, 35, 27, 15, 40 };
	int mi;

	// 1. ���� ���� ���� ã�´�.
	// 2. ��ó�� ���� �ּҰ��� ��ġ Swap => ��� �ݺ�
	// 30 35 27 15 40
	// 15 35 27 30 40
	// 15 27 35 30 40
	// 15 27 30 35 40

	int min = findMin(a, 5);
	mi = findMinIndex(a, 0, 5);

	printf("�迭�� �ּҰ��� %d �̰�, �� �ε��� ���� %d �̴�.\n", min, mi);

	selectionSort(a, 5);
	printArray(a, 5);
}