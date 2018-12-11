#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

typedef struct linkedlist
{
	Node* pHead;
	Node* pTail;
	int nNode;
} LinkedList;

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

void printLL(LinkedList* pList)
{
	Node* ptr = pList->pHead;
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

// �Լ� : addHead()
// �Է� : ���Ḯ��Ʈ ����ü ������(LinkedList*), �� ��� ������
// ��� : ����
// �μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(LinkedList* pList, Node* pNewNode)
{
	if(pList->pHead == NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead;	//#1 
	pList->pHead = pNewNode;		//#2
	(pList->nNode)++;
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
	// �߿�
	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));
	printLL(pList);

	Node* pHead = NULL;	// ������� ������. NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	Node a, b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;
	//printLL(pHead);
	
	pHead->pNext = createNode(20);

	return 0;
}

/*
int sum(int, int);
int (*fff)(int, int);

int main()
{
	fff = sum;

	printf("value = %d\n", sum(10, 20));
	printf("value = %d\n", fff(100, 200));

	return 0;
}

int sum(int a, int b)
{
	return a+b;
}
*/
