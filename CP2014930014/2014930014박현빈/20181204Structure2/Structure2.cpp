#include <stdio.h>
#include <stdlib.h>

// Today's Topic : ����ü (Structure)
// ������� + ��� ���� ����

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
	tempPtr = (Complex*) malloc(sizeof(Complex));	// ���� �Ҵ�
	// malloc �Լ������� stdlib.h ����ؾ� ��.
	tempPtr->real = ptr->real;
	tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
}
// malloc(), free() => ���� �Ҵ�(Dynamic Allocation)

// ���Ҽ��� �� �����ϴ� �Լ�
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
	// ��� �غ��Ұų�? => Life Time�� ���α׷��� ���� ����ִ� �ֵ��� ����ϸ� ��. ������������ �������� �ظ��ϸ� ������
	// �������� - ���α׷� ������ �� �����ǰ�, ���α׷� ����� �� �Ҹ��.
	// ������ Life Time�� ���α׷��Ӱ� ���� ���� �� ���� ==> �����Ҵ�

	ptr = &a;
	//ptr->real = 100;	// ����ü ������ ������ ������� ���ٹ�� ==> ����ü �����̸�->��������̸�
	//ptr->imag = 200;	
	printComplex(ptr);

	b.real = 20;
	b.imag = 40;
	Complex* sum;
	sum = sumComplex(&a, &b);
	printComplex(sum);

	return 0;
}