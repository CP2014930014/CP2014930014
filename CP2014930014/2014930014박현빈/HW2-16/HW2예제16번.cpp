// 16. �� Ư���� ������ ��ü �ڸ����� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ����� �Է� : �� ���� ���� 
// ��� : �ڸ����� ����

#include <stdio.h>
int main()
{
	int num;
	int a = 1;

	printf("����� �Է� : ");
	scanf("%d", &num);

	if (num > 10)
	{
		for (num; num>=10;)
		{
			num = num/10;
			a++;
		}
		printf("�ڸ��� : %d\n", a);
	}
	else
		printf("�ڸ��� : %d\n", a);
}