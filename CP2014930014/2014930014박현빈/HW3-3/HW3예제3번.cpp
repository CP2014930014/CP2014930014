// 3. �� ���� ������ ������ �� �Ҽ��� ȭ�鿡 ����ϴ� �Լ�

#include <stdio.h>
void primePrint(int x, int y)
{
	int a, b;
	int sum = 0;
	if (x > y)
		a=y, b=x;
	else
		a=x, b=y;
	for (int num=a; num<=b; num++)
	{
		int i = 2;
		int isPrime = 1;
		while (i < num)
		{
			if (num%i == 0)
			{
				isPrime = 0;
				break;
			}
			i++;
		}
		if (isPrime)
			printf("%d\t", num);
	}
	printf("\n");
}
int main()
{
	int x, y;
	printf("���� x�� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("\n���� y�� �Է��ϼ��� : ");
	scanf("%d", &y);
	printf("\n");

	printf("%d���� %d������ �Ҽ��� ������ �����ϴ�.\n", x, y);
	primePrint(x, y);
}