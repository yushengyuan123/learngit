#include "../head/LinkStack.h"
#include <stdlib.h>
#include <stdio.h>

//链栈(基于链表的)
Status initLStack(LinkStack *s) 
{
	s->top=(LinkStackPtr)malloc(sizeof(StackNode));
	
	s->top->next=NULL; 
	
	s->count=0;

	return SUCCESS;
} //初始化


Status isEmptyLStack(LinkStack *s){

	if(s->top->next==NULL)
			return SUCCESS;
			
	return ERROR;

} //判断链栈是否为空

Status getTopLStack(LinkStack *s,ElemType *e)
{

	if(s->top->next==NULL)
			return ERROR;
			
	else{
		
		*e=s->top->data;
		
		return SUCCESS; 
	}



}  //得到栈顶元素

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
} //清空栈
 

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
	
}   //销毁栈

Status LStackLength(LinkStack *s,int *length)
{		
		
		if(s->top->next==NULL) 
				return ERROR;
				
		else{
			*length=s->count;
		}
		
		return SUCCESS;	
				
}
    //检测栈长度

Status pushLStack(LinkStack *s,ElemType data) 
{
	
		LinkStackPtr  p;
		
		p=(LinkStackPtr )malloc(sizeof(StackNode));
		
		p->data=data;
		
		p->next=s->top->next;
		
		s->top->next=p;
		
		s->count=s->count+1;
		
		return SUCCESS;


} //入栈

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
	
}   //出栈


void StackTraverse(LinkStack *s)//遍历栈   
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
		
		if(j==2)printf("\t\t*\t\t1.初始化栈\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.判断链栈是否为空\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.得到栈顶元素\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.清空栈\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.销毁栈\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.检测栈长度\t\t\t*\n");
		if(j==14)printf("\t\t*\t\t7.入栈\t\t\t\t*\n");
		if(j==16)printf("\t\t*\t\t8.出栈\t\t\t\t*\n");
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

