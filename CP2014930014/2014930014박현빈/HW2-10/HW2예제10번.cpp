// 10. �Ҽ�(prime-number) �˻�� ����ϰ� ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 8 => 2 4 
// 12 => 2 3 4 6

#include <stdio.h>
int main()
{
	int n;

	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printf("\n%d =>\t", n);
	int i=2;
	while (i < n)
	{
		if (n%i==0)
		{
			printf("%d\t", i);
		}
		i++;
	}
	printf("\n");
}