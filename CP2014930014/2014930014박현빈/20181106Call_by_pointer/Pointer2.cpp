#include <stdio.h>

void test (int a)
{
	a = 100;
}
void testPointer (int* ptr)
{
	*ptr = 100;
}
int main()
{
	int a = 10;
	test(a);
	printf("a = %d\n", *&a);
	// a에 10이 저장 -> test(a)수행 -> 함수 test를 위한 메모리 영역 생성 -> 그 메모리 영역에 100 저장 -> 함수 수행 후 메모리 영역 소멸 -> 결국 a=10 출력

	// 포인터를 매개변수값으로 전달
	testPointer(&a);
	printf("a = %d\n", a);
	return 0;
}