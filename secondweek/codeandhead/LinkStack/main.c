#include <stdio.h>
#include <stdlib.h>
#include "../head/LinkStack.h"


int main(){
	
	LinkStack *p=(LinkStack *)malloc(sizeof(LinkStack));
	
	int i,j,k,input,h,o;
	
	int *length=&o,*topelement=&h;
	
	while(1)
	{
		showform();
		printf("请选择你所需要的功能\n");
		i=choose();
		
		if(i==1){
									 
			i=initLStack(p);
			
			if(i==1)
				printf("初始化成功\n");
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		}
		
		if(i==2)
		{
			i=isEmptyLStack(p);
			if(i==0){
				printf("栈不为空的\n");
				printf("当前栈所拥有的数字为:\n");
				StackTraverse(p);
				printf("\n");
			}
			
									
			if(i==1){
				
				printf("栈为空\n");
										
			}
			
			printf("输入任意数字返回\n");
			
			scanf("%d",&k);				
								
		}
		
		if(i==3)
		{
						
			printf("现在栈的元素有：\n");
			StackTraverse(p);
			
			i=getTopLStack(p,topelement);
			
			if(i==1)
					printf("此时栈顶元素为：%d\n",h);
					
			if(i==0)
					printf("此时栈为空的\n");
			 
					
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				i=clearLStack(p);
					
					if(i==1)
							printf("清空栈成功\n");
							
				printf("输入任意数字返回\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			i=destroyLStack(p);
			
			if(i==1)
					printf("销毁栈成功\n");
			
			if(i==0)
					printf("栈是空的，无需销毁/n");	
					
			printf("输入任意数字返回\n");
			scanf("%d",&k);		
		}
		
		if(i==6)
		{
			
			i=LStackLength(p,length);
			
			if(i==1)
				printf("栈顶长度为:%d\n",o);
				
			if(i==0)
				printf("栈是空的，无栈顶元素\n");
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		 } 
		
		if(i==7){
			
			printf("请输入你所想要入栈的数字\n");
			scanf("%d",&input);
			i=pushLStack(p,input); 
						
			if(i==1)
					printf("入栈成功，当前栈所拥有的数字为:\n");
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=popLStack(p,topelement);
			
			if(i==1){ 
					printf("出栈成功,出栈的数字为%d，当前栈所拥有的数字为\n",h);
					StackTraverse(p);
			}
			
			 
			if(i==0)
					printf("栈是空的，无需出栈");		
			
			
			printf("\n") ;
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		}
	}	
			
}
	
			



