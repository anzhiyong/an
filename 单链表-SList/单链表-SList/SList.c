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
//�����ͷ�塢β��
void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLBuyNode(x);
	//����Ϊ�գ��½ڵ���Ϊpphead
	if (*pphead == NULL)
	{
		*pphead = newnode;
		return;
	}
	//����Ϊ��,��β�ڵ�
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

//�����ͷɾ��βɾ
void SLTPopBack(SLTNode** pphead) {

}
void SLTPopFront(SLTNode** pphead) {

}