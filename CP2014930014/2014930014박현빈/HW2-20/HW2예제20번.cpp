// 20. 100 ������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int num;
	for (num=2; num<=100; num++)
	{
		int i=2, isPrime=1;
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