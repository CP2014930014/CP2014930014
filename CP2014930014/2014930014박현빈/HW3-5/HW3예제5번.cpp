// 5. n���� �������� ȭ�鿡 ����ϴ� �Լ�

#include <stdio.h>
void printMul(int x)
{
	for (int i=1; i<=9; i++)
		printf("%d * %d = %d\n", x, i, x*i);
}
int main()
{
	int n;
	
	printf("���� n�� �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("%d���� �������� �Ʒ��� �����ϴ�.\n", n);
	printMul(n);
}