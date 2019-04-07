#include <stdio.h>
#include <stdlib.h>
#include "../head/LQueue.h"
int main()
{
	
	LQueue *p=(LQueue *)malloc(sizeof(LQueue));
	p->front=p->rear=NULL; 
	
	int i,j,k,h,o,m,longth;
	
	int *length=&o,*topelement=&h,*input=&m;
	
	while(1)
	{
		showform();
		printf("请选择你所需要的功能\n");
		i=choose();
		
		if(i==1){
									 
			InitLQueue(p);
									
			printf("初始化成功\n");
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);				
		}
		
		if(i==2)
		{
			i=IsEmptyLQueue(p);
			
			if(i==0)								
					printf("队列不为空\n");										
			
			if(i==1)
					printf("队列为空\n");
					
			printf("输入任意数字返回\n");
			
			scanf("%d",&k);				
			i=1;					
		}
		
		if(i==3)
		{
						
			printf("现在队列的元素有：\n");
			i=TraverseLQueue(p,LPrint);					
			
			i=GetHeadLQueue(p,topelement);
			
			if(i==1)
					printf("此时队头顶元素为：%d\n",h);
					
			if(i==0)
					printf("此时队列为空的\n");
			 
					
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				ClearLQueue(p);
					
				printf("清空队列成功\n");
							
				printf("输入任意数字返回\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			DestoryLQueue(p);			
			
			printf("销毁队列成功\n");
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);																			
		}
		
		if(i==6)
		{
															
			longth=LengthLQueue(p);
					
			printf("队列长度为:%d\n",longth);
										
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
			
		 } 
		
		if(i==7){						
						
			i=IsEmptyLQueue(p); 
			
			if(i==1){				
					printf("队列未初始化,无法入队"); 
			}
									
			if(i==0){				
				printf("请输入你所想要入队的数字(一个一个入,从左到右，是队头到队尾)\n");
				
				scanf("%d",&m);
				
				EnLQueue(p,input);
				
				printf("入队成功，当前队列所拥有的数字为:");
							
				i=TraverseLQueue(p,LPrint);
			}						
			
			printf("\n") ;
			
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=IsEmptyLQueue(p);
			
			if(i==1){
				printf("队列为空无法出队");							
			}
			
			if(i==0){ 
					DeLQueue(p); 
					printf("出队成功,当前队列所拥有的数字为（从左到右，是队头到队尾）:\n");
					i=TraverseLQueue(p,LPrint);
			}
			printf("\n");
			printf("输入任意数字返回\n");
			scanf("%d",&k);	
		}
			
			 
		if(i==0){		
				return 0;				
		}
	}	
			
	return 0;
											 				
	return 0;
}
