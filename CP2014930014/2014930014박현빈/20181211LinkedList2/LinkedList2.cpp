#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

// �Լ� : averageLL()
// �Է� : ���Ḯ��Ʈ
// ��� : ��� ������ ���(double)
// �μ�ȿ�� : ����
double averageLL(Node* ptr)
{
	int sum = 0, i = 0;
	while (ptr != NULL)
	{
		sum += ptr->score;
		i = i + 1;
		ptr = ptr->pNext;
	}
	double avg = ((double)sum) / i;
	return avg;
}

void printLL(Node* ptr)
{
	while(ptr != NULL)
	{
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

Node* createNode(int input)
{
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}

void addHead(Node** ppHead, Node* pNewNode)
{
	// ����������
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}

// �Լ� : returnTail()
// �Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
// ��� : ������ ����� ������
// �μ�ȿ�� : ����
Node* returnTail(Node* ptr)
{
	if (ptr == NULL)	// ���Ḯ��Ʈ�� ��尡 ����
		return NULL;

	while (ptr != NULL)
	{
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

// �Լ� : addTail()
// �Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
// ��� : ����
// �μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���.
void addTail(Node* pHead, Node* pNode)
{
	if (pHead == NULL)
	{
		printf("error can't add a tail to empty linked list \n");
		return;
	}

	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}

int main()
{
	// ����ȯ
	/*double test;
	test = 10/4;	// 1. (10/4)->2�� ��ȯ, 2. ������ 2�� double�� 2.0���� ��ȯ
	printf("test = %f\n", test);
	test = 10.0/4;	// = ((double)10)/4;
	printf("test = %f\n", test);
	*/

	Node* pHead = NULL;	// ������� ������. NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	Node a, b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;
	//printLL(pHead);
	
	pHead->pNext = createNode(20);
	//printLL(pHead);

	addHead(&pHead, createNode(30));
	addHead(&pHead, createNode(25));
	addTail(pHead, createNode(100));
	printLL(pHead);

	printf("average = %f\n", averageLL(pHead));

	pHead = NULL;
	addTail(pHead, createNode(100));
	printLL(pHead);

	return 0;
}