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
		printf("��ѡ��������Ҫ�Ĺ���\n");
		i=choose();
		
		if(i==1){
									 
			InitLQueue(p);
									
			printf("��ʼ���ɹ�\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);				
		}
		
		if(i==2)
		{
			i=IsEmptyLQueue(p);
			
			if(i==0)								
					printf("���в�Ϊ��\n");										
			
			if(i==1)
					printf("����Ϊ��\n");
					
			printf("�����������ַ���\n");
			
			scanf("%d",&k);				
			i=1;					
		}
		
		if(i==3)
		{
						
			printf("���ڶ��е�Ԫ���У�\n");
			i=TraverseLQueue(p,LPrint);					
			
			i=GetHeadLQueue(p,topelement);
			
			if(i==1)
					printf("��ʱ��ͷ��Ԫ��Ϊ��%d\n",h);
					
			if(i==0)
					printf("��ʱ����Ϊ�յ�\n");
			 
					
			printf("�����������ַ���\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				ClearLQueue(p);
					
				printf("��ն��гɹ�\n");
							
				printf("�����������ַ���\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			DestoryLQueue(p);			
			
			printf("���ٶ��гɹ�\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);																			
		}
		
		if(i==6)
		{
															
			longth=LengthLQueue(p);
					
			printf("���г���Ϊ:%d\n",longth);
										
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		 } 
		
		if(i==7){						
						
			i=IsEmptyLQueue(p); 
			
			if(i==1){				
					printf("����δ��ʼ��,�޷����"); 
			}
									
			if(i==0){				
				printf("������������Ҫ��ӵ�����(һ��һ����,�����ң��Ƕ�ͷ����β)\n");
				
				scanf("%d",&m);
				
				EnLQueue(p,input);
				
				printf("��ӳɹ�����ǰ������ӵ�е�����Ϊ:");
							
				i=TraverseLQueue(p,LPrint);
			}						
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=IsEmptyLQueue(p);
			
			if(i==1){
				printf("����Ϊ���޷�����");							
			}
			
			if(i==0){ 
					DeLQueue(p); 
					printf("���ӳɹ�,��ǰ������ӵ�е�����Ϊ�������ң��Ƕ�ͷ����β��:\n");
					i=TraverseLQueue(p,LPrint);
			}
			printf("\n");
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
			
			 
		if(i==0){		
				return 0;				
		}
	}	
			
	return 0;
											 				
	return 0;
}
