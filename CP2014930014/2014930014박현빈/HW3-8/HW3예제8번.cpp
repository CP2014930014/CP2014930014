// 8. 배열의 최대값을 반환하는 함수

#include <stdio.h>
int returnMax(int arr[], int length)
{
	int max = arr[0];
	int i;
	for (i=0; i<length; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int main()
{
	int a[] = {10, 20, 30, 40, 50};
	int len = 5;
	int m;

	m = returnMax(a, len);
	printf("배열의 최대값은 %d입니다.\n", m);
}