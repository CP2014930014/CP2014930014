#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int score;
	struct node* pNext;
} Node;

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
	// 이중포인터
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
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
	// 형변환
	/*double test;
	test = 10/4;	// 1. (10/4)->2를 반환, 2. 정수형 2를 double형 2.0으로 변환
	printf("test = %f\n", test);
	test = 10.0/4;	// = ((double)10)/4;
	printf("test = %f\n", test);
	*/

	Node* pHead = NULL;	// 헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속하자)
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