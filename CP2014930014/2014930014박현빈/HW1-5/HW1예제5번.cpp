#include <stdio.h>

int main()
{
	// �޴��� ����ϰ�, ����ڷκ��� �Է��� �޾� ���õ� �޴��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	// choose one of the following.
	// apple
	// orange
	// banana
	// peach
	//
	// enter your choice here : (����� �Է�)orange
	//
	// --------------
	// Your choice is ��orange��.

	printf("Choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");

	printf("Enter your choice here : ");
	char f[10];

	scanf("%s", &f);
	printf("\n-------------------------\n");
	printf("Your choice is '%s'.\n", f);
}