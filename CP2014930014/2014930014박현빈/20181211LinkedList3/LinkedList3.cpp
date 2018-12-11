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

// 함수 : averageLL()
// 입력 : 연결리스트
// 출력 : 노드 성적의 평균(double)
// 부수효과 : 없음
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

// 함수 : addHead()
// 입력 : 연결리스트 구조체 포인터(LinkedList*), 새 노드 포인터
// 출력 : 없음
// 부수효과 : 연결리스트 헤드에 새 노드를 추가
void addHead(LinkedList* pList, Node* pNewNode)
{
	if(pList->pHead == NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead;	//#1 
	pList->pHead = pNewNode;		//#2
	(pList->nNode)++;
}

// 함수 : returnTail()
// 입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
// 출력 : 마지막 노드의 포인터
// 부수효과 : 없음
Node* returnTail(Node* ptr)
{
	if (ptr == NULL)	// 연결리스트에 노드가 없음
		return NULL;

	while (ptr != NULL)
	{
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

// 함수 : addTail()
// 입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
// 출력 : 없음
// 부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨.
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
	// 중요
	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));
	printLL(pList);

	Node* pHead = NULL;	// 헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속하자)
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
