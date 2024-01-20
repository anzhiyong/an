#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SList01()
{
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 2;
	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 3;
	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 4;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	SLTNode* plist = node1;
	SLTPrint(plist);
}
void slttest()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 8);
	SLTPrint(plist);
	SLTPushFront(&plist, 10);
	SLTPrint(plist);
}

int main()
{
	
	slttest();
	return 0;
}