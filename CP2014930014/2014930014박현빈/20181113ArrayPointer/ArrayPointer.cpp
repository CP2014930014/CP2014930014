#include <stdio.h>
// printArray()
// �Է� : �迭
// ��� : ����
// �μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
//void printArray(int arr[], int len)
void printArray(int* arr, int len)	// ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
{
	for(int index=0; index<len; index++)
		printf("array[%d] is %d\n", index, arr[index]);
}
int main()
{
	int a[3] = {10, 20, 30};	// �迭�� ���� : �迭�̸�-a, �迭����-3
	int* ptr;
	// �迭�� �̸��� ����ϸ� �� �迭 ù ����� ������ ���� �ȴ�.
	ptr = a;					// ==> ptr = &a[0];
	printArray(a, 3);
	//a = ptr;	// error WHY? �迭�� �̸�(a)�� ���� ������ �ִ�. ��, rvalue�̴�.
	//10 = a[2];	// error ���� ���� ����

	//printArray(a, 3);

	// 1. ���� ���� ���� ã�´�.
	// 2. ��ó�� ���� �ּҰ��� ��ġ Swap => ��� �ݺ�
	// 30 35 27 15 40
	// 15 35 27 30 40
	// 15 27 35 30 40
	// 15 27 30 35 40

	return 0;
}