#include <stdio.h>

// int gVar = 100;		// 함수 전체에서 gVar = 100이라는 것을 선언한 것. 전역변수(global variable) 왠만해서 얘네 쓰지마!!
// static vs auto, static - 매개변수를 저장한 메모리가 호출될 때 생성되고 함수가 실행되면 사라지지만, static을 사용하면 안 없어짐.
// 함수 sum()
// 입력 : 두 정수
// 출력 : 두 정수의 합
// 부수효과 : 없음
int sum(int a, int b)	// => 함수 선언
{
	// 함수이름 (sum)
	// 매개변2수의 갯수 : 2
	// 각 매개변수의 자료형 (int, int)
	// 반환값의 자료형(반환형) (int)		==> 함수 호출하기 위해 필요한 정보
	int c;
	c = a + b;
	return c;	// => 함수 본체
}		// 함수 선언 + 한수 본체 = 함수 정의
// 리턴값이 없는 함수 ex) 화면 출력하는 함수
// 함수 : goodPrint()
// 입력 : 없음
// 출력 : 없음
// 부수효과 : 화면에 good 출력
void goodPrint()	// 출력하는 값이 없을때 void를 쓴다.
{
	printf("good\n");	// 리턴하는 값이 없기 때문에 return을 쓰지 않았다.
}
int main()
{
	// 요약화 - 절차적 요약화, 선언적 요약화
	
	int x = 10, y = 20, z;
	z = sum(x, y);			// 함수 호출
	printf("z = %d\n", z);
	// 디버거 사용법 : 좌측에 회색 부분을 클릭하여 F5를 클릭하면 디버거를 실행할 수 있다.
	// 조사식 - Debug - Windows - Watch - Watch1
	// 조사식에서 &x를 입력하면 x의 주소를 보여준다.
	goodPrint();
	return 0;
}