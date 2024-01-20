#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
//链表是由节点组成
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//typedef struct SListNode SLTNode;

void SLTPrint(SLTNode* phead);

//链表的头插、尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

//链表的头删、尾删
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);