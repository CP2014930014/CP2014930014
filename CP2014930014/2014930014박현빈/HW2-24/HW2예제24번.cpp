// ����ڿ��� ���� ���� �Է¹޾Ƽ� �� �� �� ��ŭ ��ǥ �ﰢ���� ����ÿ�.
//����� �Է�: 4
// *
// ***
// *****
// *******

#include <stdio.h>
int main()
{
	int num;
	printf("����� �Է� : ");
	scanf("%d", &num);

	for (int i=1; i<=num; i++)
	{
		for (int j=0; j<2*i-1; j++)
			printf("*");
		printf("\n");
	}
}