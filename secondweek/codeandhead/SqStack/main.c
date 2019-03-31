#include <stdio.h>
#include <stdlib.h>
#include "../head/SqStack.h"


int main()
{
	SqStack *p=(SqStack *)malloc(sizeof(SqStack));
	
	int i,j,size,k,input,h,o;
	
	int *length=&o,*output=&h;
	
	
	
	while(1)
	{
		showform();
		printf("请选择你所需要的功能\n");
		i=choose();
		
		if(i==1){
			
			printf("请输入你想要栈的大小\n"); 
			 
			scanf("%d",&size);
			j=initStack(p,size);
			
			if(i==1)
				printf("初始化成功，你所要的栈大小为%d\n",size);
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		}
		
		if(i==2)
		{
			i=isEmptyStack(p);
			if(i==0)
					printf("栈是空的\n");
					
			if(i==1){
				
				printf("栈不为空\n");
				
				printf("入栈成功，当前栈所拥有的数字为\n");
					
				StackTraverse(p);
			}			
								
		}
		
		if(i==3)//当栈不为空的时候出现错误 
		{
			StackTraverse(p);			
			i=stackLength(p,length);
			
			if(i==0)
					printf("栈是空的\n"); 
					
			if(i==1)
					printf("栈的长度为%d\n",o); 
					
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				i=clearStack(p);
					
					if(i==1)
							printf("清空栈成功\n");
							
				printf("输入任意数字返回\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			i=destroyStack(p);
			
			if(i==1)
					printf("销毁栈成功\n");
					
			StackTraverse(p);
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);		
		}
		
		if(i==6)
		{
			
			i=getTopStack(p,output);
			
			if(i==1)
				printf("栈顶元素为%d\n",h);
				
			if(i==0)
				printf("栈是空的，无栈顶元素\n");
				
			
			
		 } 
		
		if(i==7){
			
			printf("请输入你所想要入栈的数字\n");
			scanf("%d",&input);
			i=pushStack(p,input); 
						
			if(i==1)
					printf("入栈成功，当前栈所拥有的数字为\n");
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=popStack(p,output);
			
			if(i==1)
					printf("出栈成功,出栈的数字为%d，当前栈所拥有的数字为\n",h);
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		}
	}	
		
	
		
		
		
		
		
		
		
		
}

	
	

	

