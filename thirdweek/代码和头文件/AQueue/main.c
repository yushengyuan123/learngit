#include <stdio.h>
#include <stdlib.h>
#include "../head/AQueue.h"

int main(){
	
	
	
	AQueue *p=(AQueue *)malloc(sizeof(AQueue));
	p->front=p->rear=NULL; 
	
	int i,j,k,h,o,m,longth,n;
	
	int *length=&o,*topelement=&h,*input=&m,*z=&n;
	
	while(1)
	{
		showform();
		printf("��ѡ��������Ҫ�Ĺ���\n");
		i=choose();
		
		if(i==1){
									 
			InitAQueue(p);
									
			printf("��ʼ���ɹ�\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);				
		}
		
		if(i==2)
		{
			i=IsEmptyAQueue(p);
			
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
			i=TraverseAQueue(p,APrint);					
			
			i=GetHeadAQueue(p,topelement);
			
			if(i==1)
					printf("��ʱ��ͷ��Ԫ��Ϊ��%d\n",h);
					
			if(i==0)
					printf("��ʱ����Ϊ�յ�\n");
			 
					
			printf("�����������ַ���\n");
			scanf("%d",&k);	
				
		}
		
		if(i==4)
		{
				ClearAQueue(p);
					
				printf("��ն��гɹ�\n");								
							
				printf("�����������ַ���\n");
				scanf("%d",&k);	
		
		} 
		
		if(i==5)
		{
				
			DestoryAQueue(p);			
			
			printf("���ٶ��гɹ�\n");
			
			printf("�����������ַ���\n");
			scanf("%d",&k);																			
		}
		
		if(i==6)
		{
															
			longth=LengthAQueue(p);
					
			printf("���г���Ϊ:%d\n",longth);
										
			printf("�����������ַ���\n");
			scanf("%d",&k);	
			
		 } 
		
		if(i==7){						
									 															
							
			printf("������������Ҫ��ӵ�����(һ��һ����,�����ң��Ƕ�ͷ����β)\n");
				
			scanf("%d",&m);
							
			EnAQueue(p,input);										
				
			printf("��ӳɹ�����ǰ������ӵ�е�����Ϊ:");
							
			i=TraverseAQueue(p,APrint);
									
			
			printf("\n") ;
			
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
		
		
		if(i==8) 
		{		
			i=IsEmptyAQueue(p);
			
			if(i==1){
				printf("����Ϊ���޷�����");							
			}
			
			if(i==0){ 
					DeAQueue(p); 
					printf("���ӳɹ�,��ǰ������ӵ�е�����Ϊ�������ң��Ƕ�ͷ����β��:");
					i=TraverseAQueue(p,APrint);
			}
			printf("\n");
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
		
		if(i==9){
			
			i=IsFullAQueue(p);
			
			if(i==0)
					printf("���л�û����\n");
					
			else
					printf("�����Ѿ�����\n");
			i=1;
			printf("�����������ַ���\n");
			scanf("%d",&k);	
		}
			
			 
		if(i==0){		
				return 0;				
		}
	}	
			
	return 0;
											 				

	
}
