#include <stdio.h>
#include <stdlib.h>
#include "../head/linkedList.h"

int main()
{
	
	
	int i,j,m,k,n;
	LinkedList *L;
	LinkedList p,p1,p2,p3,p4;
	L=&p;
	
	while(1)
	{
		m=0;
		showform();
		printf("������������Ҫ������\n");
		i=choose();
		
		if(i==1)
		{
			
			j=InitList(L);
			
				if(j==0)  printf("��ʼ��ʧ��\n");
				if(j==1)  printf("��ʼ���ɹ�\n");			
				printf("������1����������\n");
				scanf("%d",&m);				 					
		}
		
		if(i==2) 
		{
			printf("������������Ҫ������\n");
					
							
					printf("��ʼ��������\n");	
							
					p=creat();
					printf("�������������Ϊ��\n");
					
					TraverseList(p,solve);
					
					printf("\n");
					printf("������1����������\n");
					scanf("%d",&m);			
					
			
			
		
						
		}
		
			if(i==3)//������ 
		{
			DestroyList(L);		
		    printf("ɾ���ɹ�\n");		    
			printf("\n");
			printf("������1����������\n");
			scanf("%d",&m);	
		}	
		
			if(i==4)
		{
						
			TraverseList(*L,solve);
			j=ReverseList(L);
			printf("\n");
			printf("��ת�������Ϊ\n");
			
			TraverseList(*L,solve);
			printf("\n");
			
				if(j==1)
			{
				printf("��ת�ɹ�\n");
			}
			printf("������1����������\n");
				scanf("%d",&m);	
		}
		
			if(i==5)
		{
			printf("�봴������Ҫ��������������������\n");
			printf("��һ����������:\n");
			
			p1=creat();
			printf("�ڶ�����������:\n");
			p2=creat();
			j=InsertList(p1, p2);
			
			if(j==1)
			{
				printf("����ɹ�\n");
				printf("�������������ϲ���һ��Ϊ��\n");
				TraverseList(p1,solve);
								
			}
			printf("������1����������\n");
			
				scanf("%d",&m);	
								
		}
		
			if(i==6)
		{
			printf("��ո����������Ϊ��\n");
			
			TraverseList(*L,solve);
			
			printf("������������ҪѰ�ҽڵ��������\n");
		
			scanf("%d",&k);
			j=SearchList(*L,k);
			
			if(j==1)
			{
				printf("Ѱ�ҳɹ�\n");
			}
					
			
			printf("������1����������\n");
				scanf("%d",&m);	
			
		}
		
		
			if(i==7)//������ 
		{
			
			printf("��ո����������Ϊ��\n");
			
			TraverseList(*L,solve);
			j=IsLoopList(*L);
			
			printf("\n");
			
			if(j==0)  printf("�ܱ�Ǹ������ѭ����\n");		
			
			printf("������1����������\n");
			scanf("%d",&m);	
						
		}
		
			if(i==0)		
			return 0;
			
			
			if(i==8)
		{
			
			printf("��ո����������Ϊ��\n");
			
			TraverseList(*L,solve);
			
			p4=FindMidNode(L) ;
			
			printf("�ҵ��м�ڵ㣬��������Ϊ:%d\n",p4->data);
			
			printf("������1����������\n");
			scanf("%d",&m);	
						
		}
		
			if(i==0)		
			return 0;
		
	
	} 
		return 0;
}
