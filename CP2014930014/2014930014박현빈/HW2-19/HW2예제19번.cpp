// 19. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���ڰ� �Ҽ����� �ƴ����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
	int num;
	int isPrime = 1;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	int i=2;
	while (i < num) {
		if (num%i == 0) {
			isPrime = 0;
			break;
		}
		i++;
	}
	if (isPrime)
		printf("%d�� �Ҽ��Դϴ�.\n", num);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
}