#include <stdio.h>
// printArray()
// �Է� : �迭
// ��� : ����
// �μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
void printArray(int arr[], int len)
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
	printf("first element = %d\n", a[0]);
	printf("first element = %d\n", *ptr);
	// �����ͺ��� �̸��� �迭 �̸����� ����� �� �ִ�.
	printf("first element = %d\n", ptr[0]);
	printf("first element = %d\n", ptr[1]);
	printf("first element = %d\n", ptr[2]);

	//printArray(a, 3);

	return 0;
}