#include <stdio.h>
// 데이터는 거의 배열 형식. 전기 파형, 주식 변형선 등등
// x[i] 에서 i는 index
// 함수 printArray()
// 입력 : 배열
// 출력 : 없음
// 부수효과 : 화면에 모든 요소를 출력
void printArray(int arr[], int length)	// (배열이름[], 배열길이)
{
	for (int i=0; i<length; i++)
		printf("a[%d] = %d\n", i, arr[i]);
}

int main()
{
	int len = 4;		// integer 형태의 메모리 공간이 하나 생성. 하지만 배열을 쓰면 integer 형태의 메모리 공간이 연속적으로 생성된다.
	// 배열 선언
	// 1. 배열의 이름 : a
	// 2. 요소의 자료형 : int
	// 3. 배열의 길이 : 4
	//int a[4];	// 배열 선언 => a[0], a[1], a[2], a[3]이 생성된다.
	//a[0] = 20;
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	int a[4] = { 2, 20, 200, 2000 };	// 위의 5줄과 같은 의미. 배열 초기화 방법
	int arr[] = { 3, 30, 300 };			// 길이 3의 배열 생성. 초기화할 때 3개를 집어넣어서.
	//int count = 0;
	//while (count < len)
	//{
	//	printf("a[%d] = %d\n", count, a[count]);
	//	count++;
	//}
	printArray(a, len);		// 배열을 함수로 쓸 때는 무조건 배열과 배열의 길이를 같이 줘야 함. 함수에서 배열의 길이를 알 수 있는 방법이 없음.
	printf("%d\n", a[100]);
	// 배열을 매개변수로 함수에 던지는 방법

	return 0;
}