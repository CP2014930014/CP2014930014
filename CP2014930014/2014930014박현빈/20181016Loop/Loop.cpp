#include <stdio.h>
int main()
{
//===========�� ���� ��а� ����
	//ctrl-k, ctrl-f : Format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
	//ctrl-] : matching parentheses
	//ctrl-k, ctrl-c : ������ ������ Comment out
	//ctrl-k, ctrl-u : undo comment out

	//int count = 1;
	//while (count <= 10)
	//{
	//	printf("count = %d\n", count);
	//	count = count + 1;
	//}
	//int count = 1;
	//while (count <= 10)
	//	printf("count = %d\n", count++);	// ���� ���� �ִ��� ���� ��

	//printf("\n");
	// 1�������� 100���� 3�� ����� ȭ�鿡 ���
	//int num = 1;
	//while (num <= 100)
	//{
	//	if ( (num % 3) == 0)
	//		printf("%d\t", num);
	//	num++;
	//}

	//printf("\n");
	// 1�������� 100���� 3�� ����� ������ ������ ȭ�鿡 ���
	//int num = 1;
	//while (num <= 100)
	//{
	//	if ( (num % 3) != 0)
	//		printf("%d\t", num);
	//		// printf("%d\t", num++); �� ����, ���� ������ ���� ���� ������ �Ǵ� ���̹Ƿ� �̷��� ����ϸ� �� �ȴ�.
	//	num++;
	//}
	
	// �б⹮
	// Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	// ���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�.
	//int input;
	//while (1) {
	//	printf("\n���� �Է��ϼ��� : ");
	//	scanf("%d", &input);
	//	if (input == 100) break;
	//	if (input >= 1000) {
	//		printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է����ּ���\n");
	//		continue;
	//	}

	//	if (input % 3 == 0)
	//		printf("�Է��Ͻ� ���� %d�� 3�� ����Դϴ�.\n", input);
	//	else
	//		printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n", input);
	//};

	//printf("\n���α׷� ����!!!!!!!\n");

	//int i=2, isPrime=1, n=9;
	//while (i<n) {
	//	if (n%i==0) {
	//		isPrime = 0;
	//		break;
	//	}
	//	i++;
	//}
	//if (isPrime)
	//	printf("n�� �Ҽ��Դϴ�.\n");
	//else
	//	printf("n�� �Ҽ��� �ƴմϴ�.\n");

	// 1���� 100������ ������ ���� ���Ͻÿ�.
	//int sum = 0, i = 1;
	//while (i <= 100)
	//{
	//	//sum += i;
	//	//i++;
	//	//sum = sum + i++;	// ���� ���� ���� ��
	//	sum += i++;	// ���� �� ���� ���� ��
	//}
	//printf("1���� 100������ ������ ���� %d�Դϴ�.\n", sum);

	int a, b, c;
	a = 1836;
	b = 876;
	while (b)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n",a);
	
//===========�� �Ʒ��� ��а� ����
	return 0;
}