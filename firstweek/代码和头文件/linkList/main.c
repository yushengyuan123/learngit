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
		printf("请输入你所需要的数字\n");
		i=choose();
		
		if(i==1)
		{
			
			j=InitList(L);
			
				if(j==0)  printf("初始化失败\n");
				if(j==1)  printf("初始化成功\n");			
				printf("请输入1返回主界面\n");
				scanf("%d",&m);				 					
		}
		
		if(i==2) 
		{
			printf("请输入你所需要的链表：\n");
					
							
					printf("开始输入链表\n");	
							
					p=creat();
					printf("你所输入的链表为：\n");
					
					TraverseList(p,solve);
					
					printf("\n");
					printf("请输入1返回主界面\n");
					scanf("%d",&m);			
					
			
			
		
						
		}
		
			if(i==3)//有问题 
		{
			DestroyList(L);		
		    printf("删除成功\n");		    
			printf("\n");
			printf("请输入1返回主界面\n");
			scanf("%d",&m);	
		}	
		
			if(i==4)
		{
						
			TraverseList(*L,solve);
			j=ReverseList(L);
			printf("\n");
			printf("逆转后的链表为\n");
			
			TraverseList(*L,solve);
			printf("\n");
			
				if(j==1)
			{
				printf("逆转成功\n");
			}
			printf("请输入1返回主界面\n");
				scanf("%d",&m);	
		}
		
			if(i==5)
		{
			printf("请创建你所要插入的两个链表链表插入\n");
			printf("第一个链表输入:\n");
			
			p1=creat();
			printf("第二个链表输入:\n");
			p2=creat();
			j=InsertList(p1, p2);
			
			if(j==1)
			{
				printf("插入成功\n");
				printf("你所插入的链表合并在一起为：\n");
				TraverseList(p1,solve);
								
			}
			printf("请输入1返回主界面\n");
			
				scanf("%d",&m);	
								
		}
		
			if(i==6)
		{
			printf("你刚刚输入的链表为：\n");
			
			TraverseList(*L,solve);
			
			printf("请输入你所需要寻找节点的数据域\n");
		
			scanf("%d",&k);
			j=SearchList(*L,k);
			
			if(j==1)
			{
				printf("寻找成功\n");
			}
					
			
			printf("请输入1返回主界面\n");
				scanf("%d",&m);	
			
		}
		
		
			if(i==7)//有问题 
		{
			
			printf("你刚刚输入的链表为：\n");
			
			TraverseList(*L,solve);
			j=IsLoopList(*L);
			
			printf("\n");
			
			if(j==0)  printf("很抱歉他不是循环链\n");		
			
			printf("请输入1返回主界面\n");
			scanf("%d",&m);	
						
		}
		
			if(i==0)		
			return 0;
			
			
			if(i==8)
		{
			
			printf("你刚刚输入的链表为：\n");
			
			TraverseList(*L,solve);
			
			p4=FindMidNode(L) ;
			
			printf("找到中间节点，其数据域为:%d\n",p4->data);
			
			printf("请输入1返回主界面\n");
			scanf("%d",&m);	
						
		}
		
			if(i==0)		
			return 0;
		
	
	} 
		return 0;
}
