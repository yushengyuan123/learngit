#include "../head/SqStack.h"
#include <stdlib.h>
#include <stdio.h>

//顺序栈(基于数组的)
Status initStack(SqStack *s,int sizes)  //初始化栈 正确 
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
		

}  //判断栈是否为空

Status getTopStack(SqStack *s,ElemType *e) 
{
		
	
	if(s->top==-1)  
			return ERROR;
			
	if(s->top!=-1){
		
		*e=(s->elem[s->top]);			
	}
	
	return SUCCESS;
		

}  //得到栈顶元素

Status clearStack(SqStack *s){

	s->top=-1;
	
	return SUCCESS;

}   //清空栈  

	
	


Status destroyStack(SqStack *s){

	free(s->elem);
	s->top=-1;
	 
	return SUCCESS;
} 
  //销毁栈

Status stackLength(SqStack *s,int *length) 
{	
	if(s->top!=-1){
		*length =(s->top+1);  

			return SUCCESS;	
	}
	if(s->top==-1)
			return ERROR; 

}  //检测栈长度

Status pushStack(SqStack *s,ElemType data) //入栈
{
	if(s->top<s->size)	{
				 		 		
	s->elem[++(s->top)] =data;
	
	return SUCCESS;				 			
	} 

	if(s->top>=s->size)//如果栈满了再入栈就追加内存 
	{
		s->elem=(ElemType*)malloc(sizeof(ElemType)+sizeof(s->elem)); 
		
		s->elem[++(s->top)] =data;
		
		return SUCCESS;
	}

} 

Status popStack(SqStack *s,ElemType *data)   //出栈  
{

	if(s->top==-1)	
			return ERROR;
			
	if(s->top!=-1)
	{
		
		*data=(s->elem[s->top--]);//记录下来出栈的元素 
				
		return SUCCESS;	
	}

}


void StackTraverse(SqStack *s)//遍历栈  正
{
   int n,i;
   n=s->top;
   
   if(s->top!=-1){
   	
   		for(i=n;i>=0;i--){  	
   				printf("%d ",s->elem[i]);
   		}
   		
   }
   
   if(s->top==-1)
   		printf("栈是空的\n");
   
      
}

void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		
		if(j==2)printf("\t\t*\t\t1.初始化栈\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.判断栈是否为空\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.得到栈的长度\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.清空栈\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.销毁栈\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.得到栈顶元素\t\t\t*\n");
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








