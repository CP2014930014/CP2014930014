// 21. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	
	for (int i=2; i<=num; i++)
	{
		int j=2;
		int isPrime=1;
		while (j < i)
		{
			if (i%j == 0)
			{
				isPrime = 0;
				break;
			}
			j++;
		}
		if(isPrime)
			sum += i;
	}
	printf("%d ������ ���� �� �Ҽ����� ���� %d �Դϴ�.\n", num, sum);
}