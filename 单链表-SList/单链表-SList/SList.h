#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
//�������ɽڵ����
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//typedef struct SListNode SLTNode;

void SLTPrint(SLTNode* phead);

//�����ͷ�塢β��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

//�����ͷɾ��βɾ
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);