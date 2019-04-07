#include <stdio.h>
#include <stdlib.h>
#include "../head/AQueue.h"


void InitAQueue(AQueue *Q)
{	
		
	Q->front=0;
	
	Q->rear=0;
	
	Q->length=0; 
}

void DestoryAQueue(AQueue *Q){
	
	while (Q->front!= Q->rear)
	{
 		 free(&Q->data[Q->front]);
 		 
  		 Q->front=(Q->front+1)%MAXQUEUE;
  		 
	}
		
}

Status IsFullAQueue(const AQueue *Q){
	
	if((Q->rear+1)%MAXQUEUE==Q->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

	
}

Status IsEmptyAQueue(const AQueue *Q){
	
	if(Q->front==Q->rear)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

Status GetHeadAQueue(AQueue *Q, int *e){
	
	if(Q->front==Q->rear)
			return FALSE;
		
	*e=Q->data[Q->front];
	
	return TRUE;

}

int LengthAQueue(AQueue *Q){
	
	return Q->length;
	
}


Status EnAQueue(AQueue *Q, int *data){
	
	if(Q->length>MAXQUEUE)
		
			return FALSE;
	
	Q->data[Q->rear]=*data;
	
	Q->rear=(Q->rear+1)%MAXQUEUE;
	
	Q->length++;
	
	return TRUE;
	
}

Status DeAQueue(AQueue *Q){
	
	if(Q->front==Q->rear)
    {
        return FALSE;
    }
    
    else
    {
        printf("ȡ���Ķ�ͷԪ�أ�%d",Q->data[Q->front]);
        Q->front=(Q->front+1)%MAXQUEUE;
        return TRUE;
    }

}

void ClearAQueue(AQueue *Q){
	
	Q->front = Q->rear = 0;	

}
	
	

Status TraverseAQueue(const AQueue *Q, void (*foo)(int *q)){
	
	if(Q->front==Q->rear)
			return FALSE;
			
	int j;
	int a[MAXQUEUE];
	
	for(j=Q->front;j<MAXQUEUE;j++)
		a[j]=Q->data[j];
		
	int i=Q->front;
	
	while(i!=Q->rear){	
		foo(&a[i]);
		i=(i+1)%MAXQUEUE;
	}
	return TRUE;
	
}

void APrint(int *q){
	
	printf("%d ",*q);
}

void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		
		if(j==2)printf("\t\t*\t\t1.��ʼ������\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.�ж϶����Ƿ�Ϊ��\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.�鿴����ͷԪ��\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.��ն���\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.���ٶ���\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.�����г���\t\t\t*\n");
		if(j==14)printf("\t\t*\t\t7.���\t\t\t\t*\n");
		if(j==16)printf("\t\t*\t\t8.����\t\t\t\t*\n");
		if(j==18)printf("\t\t*\t\t0.��������\t\t\t*\n");	
		
		
	}
	
	printf("\t\t*************************************************\n");
}


int choose(void)
{
	int k;
	
	scanf("%d",&k);
	return k;
}
