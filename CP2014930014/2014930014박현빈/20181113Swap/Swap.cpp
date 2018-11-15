#include <stdio.h>
// 함수 : findMinIndex()
// 입력 : 배열(배열이름, 배열길이)
// 출력 : 최소값의 인덱스
// 부수효과 : 없음
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

// 함수 : swapElement()
// 입력 : 배열(배열이름, 두 개의 인덱스)
// 출력 : 없음
// 부수효과 : 배열의 두 인덱스 element가 바뀐다.
void swapElement(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// 함수 : findMin()
// 입력 : 배열(배열이름, 배열길이)
// 출력 : 배열의 최소값
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

void printArray(int* arr, int len)	// 앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
{
	for(int index=0; index<len; index++)
		printf("array[%d] is %d\n", index, arr[index]);
}

// 함수 : selectionSort()
// 입력 : 배열
// 출력 : 없음
// 부수효과 : 배열이 정렬됨.
// findMin 변수하나 더 늘려서 해보기
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

	// 1. 제일 작은 값을 찾는다.
	// 2. 맨처음 값과 최소값의 위치 Swap => 계속 반복
	// 30 35 27 15 40
	// 15 35 27 30 40
	// 15 27 35 30 40
	// 15 27 30 35 40

	int min = findMin(a, 5);
	mi = findMinIndex(a, 0, 5);

	printf("배열의 최소값은 %d 이고, 그 인덱스 값은 %d 이다.\n", min, mi);

	selectionSort(a, 5);
	printArray(a, 5);
}