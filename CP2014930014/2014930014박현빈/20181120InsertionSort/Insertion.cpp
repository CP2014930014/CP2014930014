#include <stdio.h>
void printArray(int* arr, int len)	// 앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
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
// 함수 : insertElement()
// 입력 : 배열(배열이름, 배열길이)
// 출력 : 없음
// 부수효과 : 배열의 element요소까지 정렬됨
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
// 함수 : insertionSort()
// 입력 : 배열, 
// 출력 : 없음
// 부수효과 : 배열이 정렬됨.
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