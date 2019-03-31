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
		printf("��ѡ��������Ҫ�Ĺ���\n");
		i=choose();
		
		if(i==1){
			
			printf("����������Ҫջ�Ĵ�С\n"); 
			 
			scanf("%d",&size);
			j=initStack(p,size);
			
			if(i==1)
				printf("��ʼ���ɹ�������Ҫ��ջ��СΪ%d\n",size);
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		}
		
		if(i==2)
		{
			i=isEmptyStack(p);
			if(i==0)
					printf("ջ�ǿյ�\n");
					
			if(i==1){
				
				printf("ջ��Ϊ��\n");
				
				printf("��ջ�ɹ�����ǰջ��ӵ�е�����Ϊ\n");
					
				StackTraverse(p);
			}			
								
		}
		
		if(i==3)//��ջ��Ϊ�յ�ʱ����ִ��� 
		{
			StackTraverse(p);			
			i=stackLength(p,length);
			
			if(i==0)
					printf("ջ�ǿյ�\n"); 
					
			if(i==1)
					printf("ջ�ĳ���Ϊ%d\n",o); 
					
			printf("�����������ַ���\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				i=clearStack(p);
					
					if(i==1)
							printf("���ջ�ɹ�\n");
							
				printf("�����������ַ���\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			i=destroyStack(p);
			
			if(i==1)
					printf("����ջ�ɹ�\n");
					
			StackTraverse(p);
			
			printf("�����������ַ���\n");
			scanf("%d",&k);		
		}
		
		if(i==6)
		{
			
			i=getTopStack(p,output);
			
			if(i==1)
				printf("ջ��Ԫ��Ϊ%d\n",h);
				
			if(i==0)
				printf("ջ�ǿյģ���ջ��Ԫ��\n");
				
			
			
		 } 
		
		if(i==7){
			
			printf("������������Ҫ��ջ������\n");
			scanf("%d",&input);
			i=pushStack(p,input); 
						
			if(i==1)
					printf("��ջ�ɹ�����ǰջ��ӵ�е�����Ϊ\n");
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=popStack(p,output);
			
			if(i==1)
					printf("��ջ�ɹ�,��ջ������Ϊ%d����ǰջ��ӵ�е�����Ϊ\n",h);
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		}
	}	
		
	
		
		
		
		
		
		
		
		
}

	
	

	

