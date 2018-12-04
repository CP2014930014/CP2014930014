#include <stdio.h>
#include <stdlib.h>

// Today's Topic : 구조체 (Structure)
// 구성요소 + 요소 간의 관계

typedef struct complex {
	double real;
	double imag;
} Complex;

typedef int myIntType;

void printComplex(Complex* ptr)
{
	printf("%f + i%f\n", ptr->real, ptr->imag);
}

void convertToConjugate(Complex* ptr)
{
	ptr->imag = -1 * ptr->imag;
}

Complex* returnConjugate(Complex* ptr)
{
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex));	// 동적 할당
	// malloc 함수쓰려면 stdlib.h 사용해야 함.
	tempPtr->real = ptr->real;
	tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
}
// malloc(), free() => 동적 할당(Dynamic Allocation)

// 복소수의 합 리턴하는 함수
Complex* sumComplex(Complex* c1, Complex* c2)
{
	Complex* sumPtr;
	sumPtr = (Complex*) malloc(sizeof(Complex));
	sumPtr->real = c1->real + c2->real;
	sumPtr->imag = c1->imag + c2->imag;
	return sumPtr;
}

int main()
{
	myIntType count = 10;
	Complex a, b;
	a.real = 10;
	a.imag = 20;
	printComplex(&a);

	Complex* ptr;
	
	ptr = returnConjugate(&a);
	printComplex(ptr);
	// 어떻게 극복할거냐? => Life Time이 프로그래밍 내내 살아있는 애들을 사용하면 됨. 전역변수지만 전역변수 왠만하면 쓰지마
	// 전역변수 - 프로그램 시작할 때 생성되고, 프로그램 종료될 때 소멸됨.
	// 변수의 Life Time을 프로그래머가 직접 정할 수 있음 ==> 동적할당

	ptr = &a;
	//ptr->real = 100;	// 구조체 포인터 변수의 멤버변수 접근방법 ==> 구조체 변수이름->멤버변수이름
	//ptr->imag = 200;	
	printComplex(ptr);

	b.real = 20;
	b.imag = 40;
	Complex* sum;
	sum = sumComplex(&a, &b);
	printComplex(sum);

	return 0;
}