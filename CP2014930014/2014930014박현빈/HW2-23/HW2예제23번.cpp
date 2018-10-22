// 23.
// ***** *
// *** ***
// * *****

// 를 출력하시오(반복문 써서!)

#include <stdio.h>
int main()
{
	for (int i=2; i>=0; i--)
	{
		int a = 2*i + 1;
		for (int j=0; j<=a; j++)
			if (j < 2*i+1)
				printf("*");
			else printf(" ");
		for (int k=a; k<6; k++)
			printf("*");
		printf("\n");
	}
}