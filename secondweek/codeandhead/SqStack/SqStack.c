#include "../head/SqStack.h"
#include <stdlib.h>
#include <stdio.h>

//˳��ջ(���������)
Status initStack(SqStack *s,int sizes)  //��ʼ��ջ ��ȷ 
{
	
	
	s->elem=(ElemType*)malloc(sizes*sizeof(ElemType));
		
	s->top=-1;

	s->size=sizes;
	
	return SUCCESS;

} 

Status isEmptyStack(SqStack *s) 
{
		if(s->top==-1)
				return ERROR;
				
		if(s->top!=-1)
				return SUCCESS;
		

}  //�ж�ջ�Ƿ�Ϊ��

Status getTopStack(SqStack *s,ElemType *e) 
{
		
	
	if(s->top==-1)  
			return ERROR;
			
	if(s->top!=-1){
		
		*e=(s->elem[s->top]);			
	}
	
	return SUCCESS;
		

}  //�õ�ջ��Ԫ��

Status clearStack(SqStack *s){

	s->top=-1;
	
	return SUCCESS;

}   //���ջ  

	
	


Status destroyStack(SqStack *s){

	free(s->elem);
	s->top=-1;
	 
	return SUCCESS;
} 
  //����ջ

Status stackLength(SqStack *s,int *length) 
{	
	if(s->top!=-1){
		*length =(s->top+1);  

			return SUCCESS;	
	}
	if(s->top==-1)
			return ERROR; 

}  //���ջ����

Status pushStack(SqStack *s,ElemType data) //��ջ
{
	if(s->top<s->size)	{
				 		 		
	s->elem[++(s->top)] =data;
	
	return SUCCESS;				 			
	} 

	if(s->top>=s->size)//���ջ��������ջ��׷���ڴ� 
	{
		s->elem=(ElemType*)malloc(sizeof(ElemType)+sizeof(s->elem)); 
		
		s->elem[++(s->top)] =data;
		
		return SUCCESS;
	}

} 

Status popStack(SqStack *s,ElemType *data)   //��ջ  
{

	if(s->top==-1)	
			return ERROR;
			
	if(s->top!=-1)
	{
		
		*data=(s->elem[s->top--]);//��¼������ջ��Ԫ�� 
				
		return SUCCESS;	
	}

}


void StackTraverse(SqStack *s)//����ջ  ��
{
   int n,i;
   n=s->top;
   
   if(s->top!=-1){
   	
   		for(i=n;i>=0;i--){  	
   				printf("%d ",s->elem[i]);
   		}
   		
   }
   
   if(s->top==-1)
   		printf("ջ�ǿյ�\n");
   
      
}

void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		
		if(j==2)printf("\t\t*\t\t1.��ʼ��ջ\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.�ж�ջ�Ƿ�Ϊ��\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.�õ�ջ�ĳ���\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.���ջ\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.����ջ\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.�õ�ջ��Ԫ��\t\t\t*\n");
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








