#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SLTPrint(SLTNode* phead) {
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLBuyNode(SLTDataType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
//链表的头插、尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLBuyNode(x);
	//链表为空，新节点作为pphead
	if (*pphead == NULL)
	{
		*pphead = newnode;
		return;
	}
	//链表不为空,找尾节点
	SLTNode* ptail = *pphead;
	while (ptail->next)
	{
		ptail = ptail->next;
	}
	ptail->next = newnode;
}
void SLTPushFront(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//链表的头删、尾删
void SLTPopBack(SLTNode** pphead) {

}
void SLTPopFront(SLTNode** pphead) {

}