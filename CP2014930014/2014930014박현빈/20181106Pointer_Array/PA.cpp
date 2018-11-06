#include <stdio.h>
// printArray()
// 입력 : 배열
// 출력 : 없음
// 부수효과 : 화면에 배열의 값을 출력
void printArray(int arr[], int len)
{
	for(int index=0; index<len; index++)
		printf("array[%d] is %d\n", index, arr[index]);
}
int main()
{
	int a[3] = {10, 20, 30};	// 배열의 선언 : 배열이름-a, 배열길이-3
	int* ptr;
	// 배열의 이름만 사용하면 그 배열 첫 요소의 포인터 값이 된다.
	ptr = a;					// ==> ptr = &a[0];
	printf("first element = %d\n", a[0]);
	printf("first element = %d\n", *ptr);
	// 포인터변수 이름을 배열 이름으로 사용할 수 있다.
	printf("first element = %d\n", ptr[0]);
	printf("first element = %d\n", ptr[1]);
	printf("first element = %d\n", ptr[2]);

	//printArray(a, 3);

	return 0;
}