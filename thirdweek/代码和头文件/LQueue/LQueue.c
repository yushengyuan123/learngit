#include <stdio.h>
#include <stdlib.h>
#include "../head/LQueue.h"


void InitLQueue(LQueue *Q)
{
		Q->front=(Node *)malloc(sizeof(Node));
		if(Q->front!=NULL){
			
				Q->rear=Q->front;
				Q->front->next=Q->rear->next=NULL;
		}
						
} 

void DestoryLQueue(LQueue *Q)
{
		while(Q->front!=NULL)
		{
			Q->rear=Q->front->next;
				
			free(Q->front);
			
			Q->front=Q->rear; 
			
		} 
		
		Q->front=Q->rear=NULL;

} 

Status IsEmptyLQueue(const LQueue *Q){
	
	if(Q->front==Q->rear&&Q->front==NULL)			
			return TRUE;
						
	return FALSE;			
}


Status GetHeadLQueue(LQueue *Q, int *e){
	
	
	if(Q->front==Q->rear)		
			return FALSE;
		
	else{		
		*e=(Q->front->next->data);
		
		return TRUE;
	}
	
}

int LengthLQueue(LQueue *Q){
	
	if(Q->front==Q->rear)
			
			return FALSE;
	
	Q->length=0;
	
	Node *p=Q->front->next;
	
	while(p!=NULL){
		
		Q->length++;
		p=p->next; 
	}
	
	return Q->length;
	
}

Status EnLQueue(LQueue *Q, int *data){
	
	if(Q->front==NULL)
			return FALSE;
					
	Node *pnew=(Node *)malloc(sizeof(Node));
	
	if(pnew==NULL) 
			exit(-1);
						
	pnew->data=*data;
	
	pnew->next=NULL;
	
	Q->rear->next=pnew;
		
	Q->rear=Q->rear->next;
	
	Q->rear->next=NULL;
		
	return TRUE;
	
}

Status DeLQueue(LQueue *Q){
	
	
	if(Q->front==NULL)
			return FALSE;
			
	Node *p=Q->front->next;

	Q->front->next=p->next;
	
	free(p);
	
	return TRUE;
			
}


void ClearLQueue(LQueue *Q){
	
	Q->front=Q->rear=NULL;				
}

 Status TraverseLQueue(const LQueue *Q, void (*foo)(int *q))

{
	
	if(IsEmptyLQueue(Q))
			return FALSE;
		
	Node *pnew=Q->front->next;
	
	while(pnew!=NULL){
		
		foo(&(pnew->data));
		
		pnew=pnew->next;
		
	}
		
	return TRUE;
	
}

void LPrint(int *q)
{	
	printf("%d ",*q);	
}



void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		
		if(j==2)printf("\t\t*\t\t1.初始化队列\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.判断队列是否为空\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.查看队列头元素\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.清空队列\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.销毁队列\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.检测队列长度\t\t\t*\n");
		if(j==14)printf("\t\t*\t\t7.入队\t\t\t\t*\n");
		if(j==16)printf("\t\t*\t\t8.出队\t\t\t\t*\n");
		if(j==18)printf("\t\t*\t\t0.结束程序\t\t\t*\n");	
		
		
	}
	
	printf("\t\t*************************************************\n");
}


int choose(void)
{
	int k;
	
	scanf("%d",&k);
	return k;
}




