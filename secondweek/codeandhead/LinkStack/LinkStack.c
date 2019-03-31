#include "../head/LinkStack.h"
#include <stdlib.h>
#include <stdio.h>

//��ջ(���������)
Status initLStack(LinkStack *s) 
{
	s->top=(LinkStackPtr)malloc(sizeof(StackNode));
	
	s->top->next=NULL; 
	
	s->count=0;

	return SUCCESS;
} //��ʼ��


Status isEmptyLStack(LinkStack *s){

	if(s->top->next==NULL)
			return SUCCESS;
			
	return ERROR;

} //�ж���ջ�Ƿ�Ϊ��

Status getTopLStack(LinkStack *s,ElemType *e)
{

	if(s->top->next==NULL)
			return ERROR;
			
	else{
		
		*e=s->top->data;
		
		return SUCCESS; 
	}



}  //�õ�ջ��Ԫ��

Status clearLStack(LinkStack *s){
	
	LinkStackPtr p=s->top;
	LinkStackPtr temp;
	
	if(s->top->next==NULL)
			return ERROR;
			
	while(p->next!=NULL)
	{
		temp=p;
		
		p=p->next;
		
		free(temp);
		
		return SUCCESS;
						
	}
	
	s->top=p; 
} //���ջ
 

Status destroyLStack(LinkStack *s)
{
	LinkStackPtr p=s->top;
	LinkStackPtr temp;
	
	if(s->top->next==NULL)
			return ERROR;
			
	while(p!=NULL)
	{
		temp=p;
		
		p=p->next;
		
		free(temp);
						
	}
	
	return SUCCESS;
	
}   //����ջ

Status LStackLength(LinkStack *s,int *length)
{		
		
		if(s->top->next==NULL) 
				return ERROR;
				
		else{
			*length=s->count;
		}
		
		return SUCCESS;	
				
}
    //���ջ����

Status pushLStack(LinkStack *s,ElemType data) 
{
	
		LinkStackPtr  p;
		
		p=(LinkStackPtr )malloc(sizeof(StackNode));
		
		p->data=data;
		
		p->next=s->top->next;
		
		s->top->next=p;
		
		s->count=s->count+1;
		
		return SUCCESS;


} //��ջ

Status popLStack(LinkStack *s,ElemType *data)
{
	LinkStackPtr p=s->top->next;
	
	if(s->top->next==NULL)
			return ERROR;
	
	
	if(s->top->next!=NULL)
	{
		*data=p->data;
		
		s->top->next=p->next;
				
		free(p);
		
		s->count--;
		
		return SUCCESS;
	}
	
}   //��ջ


void StackTraverse(LinkStack *s)//����ջ   
{
    LinkStackPtr p=s->top->next;
    
    while(p!=NULL){
    	
    	printf("%d ",p->data);
    	
    	p=p->next;
    	
	}
        
}

void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		
		if(j==2)printf("\t\t*\t\t1.��ʼ��ջ\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.�ж���ջ�Ƿ�Ϊ��\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.�õ�ջ��Ԫ��\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.���ջ\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.����ջ\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.���ջ����\t\t\t*\n");
		if(j==14)printf("\t\t*\t\t7.��ջ\t\t\t\t*\n");
		if(j==16)printf("\t\t*\t\t8.��ջ\t\t\t\t*\n");
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

