// 25.다음과 같은 출력이 나오도록 프로그램을 작성하시오.
//(1) *********** (2)54321012345
// ********* 432101234
// ******* 3210123
// ***** 21012
// *** 101
// * 0
// *** 101 
// ***** 21012 
// ******* 3210123 
// ********* 432101234 
// *********** 54321012345

#include <stdio.h>
int main()
{
	for (int i=5; i>=0; i--)
	{
		for (int j=0; j<2*i+1; j++)
			printf("*");

		printf(" ");

		for (int k=0; k<=i; k++)
			printf("%d", i-k);

		for (int l=1; l<=i; l++)
			printf("%d", l);

		printf("\n");
	}
	for (int i=1; i<=5; i++)
	{
		for (int j=0; j<2*i+1; j++)
			printf("*");

		printf(" ");

		for (int k=0; k<=i; k++)
			printf("%d", i-k);

		for (int l=1; l<=i; l++)
			printf("%d", l);

		printf("\n");
	}
}