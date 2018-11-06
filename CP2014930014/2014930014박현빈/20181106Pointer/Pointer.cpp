#include <stdio.h>

int main()
{
	// 포인터
	// 1. 메모리 주소
	// 2. 메모리 주소를 시작으로 하는 값의 자료형
									// 상태도 그리는 퀴즈
	int a = 10;						// 1. a : int - 10		변수 선언 + 변수 초기화
	int* ptr;						// 2. ptr : int* - 주소를 받음. &:Ampersand &a == Address of a, 변수 a의 주소		포인터변수 선언
	ptr = &a;						// 3. ptr이 a의 주소(첫번째 집의 주소)가 된다.	&a --> "address of" a
	*ptr = 20;						// 4. ptr 주소에 값 20을 저장함. 10 -> 20		*ptr --> "data of" ptr, 포인터변수 ptr이 가리키는 곳의 데이터
	//  위는 우변은 데이터, 좌변은 주소(저장 장소).
	printf("a = %d\n", a);

//===========이 아래는 당분간 무시
	return 0;
}