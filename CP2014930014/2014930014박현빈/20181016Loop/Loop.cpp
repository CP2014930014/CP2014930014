#include <stdio.h>
int main()
{
//===========이 위는 당분간 무시
	//ctrl-k, ctrl-f : Format, 소스코드 선택영역을 예쁘게 포맷한다.
	//ctrl-] : matching parentheses
	//ctrl-k, ctrl-c : 선택한 영역을 Comment out
	//ctrl-k, ctrl-u : undo comment out

	//int count = 1;
	//while (count <= 10)
	//{
	//	printf("count = %d\n", count);
	//	count = count + 1;
	//}
	//int count = 1;
	//while (count <= 10)
	//	printf("count = %d\n", count++);	// 위에 것을 최대한 줄인 것

	//printf("\n");
	// 1에서부터 100까지 3의 배수만 화면에 출력
	//int num = 1;
	//while (num <= 100)
	//{
	//	if ( (num % 3) == 0)
	//		printf("%d\t", num);
	//	num++;
	//}

	//printf("\n");
	// 1에서부터 100까지 3의 배수만 제외한 정수만 화면에 출력
	//int num = 1;
	//while (num <= 100)
	//{
	//	if ( (num % 3) != 0)
	//		printf("%d\t", num);
	//		// printf("%d\t", num++); 일 때는, 위의 조건이 참일 때만 진행이 되는 것이므로 이렇게 사용하면 안 된다.
	//	num++;
	//}
	
	// 분기문
	// 키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	// 위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.
	//int input;
	//while (1) {
	//	printf("\n정수 입력하세요 : ");
	//	scanf("%d", &input);
	//	if (input == 100) break;
	//	if (input >= 1000) {
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력해주세요\n");
	//		continue;
	//	}

	//	if (input % 3 == 0)
	//		printf("입력하신 정수 %d는 3의 배수입니다.\n", input);
	//	else
	//		printf("입력한 정수 %d는 3의 배수가 아닙니다.\n", input);
	//};

	//printf("\n프로그램 종료!!!!!!!\n");

	//int i=2, isPrime=1, n=9;
	//while (i<n) {
	//	if (n%i==0) {
	//		isPrime = 0;
	//		break;
	//	}
	//	i++;
	//}
	//if (isPrime)
	//	printf("n은 소수입니다.\n");
	//else
	//	printf("n은 소수가 아닙니다.\n");

	// 1에서 100까지의 정수의 합을 구하시오.
	//int sum = 0, i = 1;
	//while (i <= 100)
	//{
	//	//sum += i;
	//	//i++;
	//	//sum = sum + i++;	// 위에 식을 줄인 것
	//	sum += i++;	// 위에 두 식을 줄인 것
	//}
	//printf("1에서 100까지의 정수의 합은 %d입니다.\n", sum);

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
	
//===========이 아래도 당분간 무시
	return 0;
}