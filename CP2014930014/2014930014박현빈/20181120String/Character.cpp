#include <stdio.h>
#include <string.h>
void printArray(char* arr, int len)	// ������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
{
	for(int index=0; index<len; index++)
		printf("array[%d] = %c\n", index, arr[index]);
}
int main()
{
	char c;	// character (������)
	c = 'A'; // ==> c=65;
	printf("c = %d\n", c);
	printf("c = %c\n", c);

	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArray(a, 5);
	
	// ���ڿ� (string)
	char b[] = "hello";	// ==> char b[] = {'h', 'e', 'l', 'l', 'o', \0(null)};
	printf("%s\n", b);

	printf("the length of the string is %d \n", strlen(b));

	char str1[50] = "hello";
	char* str2 = " world";
	printf("%s\n", strcat(str1, str2));
	//strcat(str1, str2);			// ���� �Ͱ� ���� ����. str1�� str2�� �߰��Ǵ� ����.
	//printf("%s\n", str1);

	strcpy(str1, str2);
	printf("%s\n", str1);

	return 0;
}