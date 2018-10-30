// 7. 정수 배열의 합을 반환하는 함수

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
	printf("배열의 합은 %d입니다.\n", s);
}