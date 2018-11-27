#include <stdio.h>

// Today's Topic : ����ü (Structure)
// ������� + ��� ���� ����

// ����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex {
//	double real;	// ��� ����(member variable)
//	double imag;	// ��(ditto)
//};	// ����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.
//
//typedef struct complex Complex;	// �ڷ��� 'struct complex'�� ������ 'Complex'��� �θ��ڴ�.

// ���� �� ������ �ѹ������� ���� �� �ִ�.
typedef struct complex {
	double real;
	double imag;
} Complex;

// ������ Ÿ���� ���� ����
typedef int myIntType;	// �ڷ��� 'int'�� ������ 'myIntType'��� �θ��ڴ�.

// �Լ� printComplex()
// �Է� : ���Ҽ�
// ��� : ����
// �μ�ȿ�� : ����
void printComplex(Complex* ptr)
{
	printf("%f + i%f\n", ptr->real, ptr->imag);
}

// �Լ� : convertToConjugate()
// �Է� : ���Ҽ� (������)
// ��� : ����
// �μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToConjugate(Complex* ptr)
{
	ptr->imag = -1 * ptr->imag;
}

// �Լ� : returnConjugate()
// �Է� : ���Ҽ� ������
// ��� : ���Ҽ� ����
// �μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr)
{
	Complex temp;
	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	return &temp;
}

int main()
{
	myIntType count = 10;	//==> int count = 10;		�� ����.
	// ����ü ���� ����
	Complex a, b; //==> struct complex a;
	a.real = 10;	// ����ü ������ ������� ���ٹ�� ==> (����ü�����̸�).(��������̸�)
	a.imag = 20;
	printComplex(&a);
	//b = returnConjugate(&a); printComplex(&b);
	convertToConjugate(&a); printComplex(&a);

	Complex* ptr;
	ptr = returnConjugate(&a); printComplex(ptr);

	//printf("%f + i%f\n", a.real, a.imag);
	//printComplex(a);

	// ����ü ������ ���� ����
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;	// ����ü ������ ������ ������� ���ٹ�� ==> ����ü�����̸�--> ��������̸�
	//ptr->imag - 200;
	//printComplex(ptr);

	convertToConjugate(&a);
	printComplex(&a);

	return 0;
}