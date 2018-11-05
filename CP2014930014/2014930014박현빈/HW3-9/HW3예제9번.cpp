// 9. 배열의 최대값의 인덱스를 반환하는 함수

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
	printf("배열의 최대값의 인덱스는 %d입니다.\n", m);
}