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
		printf("��ѡ��������Ҫ�Ĺ���\n");
		i=choose();
		
		if(i==1){
									 
			i=initLStack(p);
			
			if(i==1)
				printf("��ʼ���ɹ�\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		}
		
		if(i==2)
		{
			i=isEmptyLStack(p);
			if(i==0){
				printf("ջ��Ϊ�յ�\n");
				printf("��ǰջ��ӵ�е�����Ϊ:\n");
				StackTraverse(p);
				printf("\n");
			}
			
									
			if(i==1){
				
				printf("ջΪ��\n");
										
			}
			
			printf("�����������ַ���\n");
			
			scanf("%d",&k);				
								
		}
		
		if(i==3)
		{
						
			printf("����ջ��Ԫ���У�\n");
			StackTraverse(p);
			
			i=getTopLStack(p,topelement);
			
			if(i==1)
					printf("��ʱջ��Ԫ��Ϊ��%d\n",h);
					
			if(i==0)
					printf("��ʱջΪ�յ�\n");
			 
					
			printf("�����������ַ���\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				i=clearLStack(p);
					
					if(i==1)
							printf("���ջ�ɹ�\n");
							
				printf("�����������ַ���\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			i=destroyLStack(p);
			
			if(i==1)
					printf("����ջ�ɹ�\n");
			
			if(i==0)
					printf("ջ�ǿյģ���������/n");	
					
			printf("�����������ַ���\n");
			scanf("%d",&k);		
		}
		
		if(i==6)
		{
			
			i=LStackLength(p,length);
			
			if(i==1)
				printf("ջ������Ϊ:%d\n",o);
				
			if(i==0)
				printf("ջ�ǿյģ���ջ��Ԫ��\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		 } 
		
		if(i==7){
			
			printf("������������Ҫ��ջ������\n");
			scanf("%d",&input);
			i=pushLStack(p,input); 
						
			if(i==1)
					printf("��ջ�ɹ�����ǰջ��ӵ�е�����Ϊ:\n");
					
			StackTraverse(p);
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=popLStack(p,topelement);
			
			if(i==1){ 
					printf("��ջ�ɹ�,��ջ������Ϊ%d����ǰջ��ӵ�е�����Ϊ\n",h);
					StackTraverse(p);
			}
			
			 
			if(i==0)
					printf("ջ�ǿյģ������ջ");		
			
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		}
	}	
			
}
	
			



