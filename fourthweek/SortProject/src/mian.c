#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/qgsort.h"
#include <math.h>
#include <time.h>


int main(){
	
	int i,j,k,h;
	
	
	while(1){
		
			show();
			i=choose();
			
			if(i==1) {
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");					
					scanf("%d",&j);
					
					int *temp;
					temp = (int *)malloc(j*sizeof(int)); 
					 
				    srand(time(NULL));
				  
   					for (i = 0; i < j; i++){
   						temp[i]=rand()%11; ;
					}
					printf("\n");			
					
					clock_t start = clock();			
						insertSort(temp,j);					
					clock_t diff=clock() - start;
					
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
			}
					
			if(i==2){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
					
					int *temp;//����һ���ݴ������ 
					temp = (int *)malloc(j*sizeof(int));
					 					
					clock_t start = clock();//��ʱ��ʼ 
						MergeSort(a,0,j-1,temp);
					clock_t diff = clock() - start;//��ʱ���� 
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
					free(temp);
					
					free(a);
			} 
			
			if(i==3){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
										 					
					clock_t start = clock();//��ʱ��ʼ 
						QuickSort_Recursion(a,0,j-1);
					clock_t diff=clock() - start;//��ʱ���� 
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
					
					free(a);
			}
			
			if(i==4){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
										 					
					clock_t start = clock();//��ʱ��ʼ 
						QuickSort_Recursion(a,0,j-1);
					clock_t diff = clock() - start;//��ʱ���� 
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
					free(a);	
					
			}//�ǵݹ�Ŀ�������û��ʵ�� 
			
			
			if(i==5){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));;;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%100; 
					}
					printf("\n");
										 					
					clock_t start = clock();//��ʱ��ʼ 
							CountSort(a,j,99);
					clock_t diff=clock() - start;//��ʱ���� 
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
					
					free(a);
					
			}			
					
			if(i==6){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
					
					srand(time(NULL));					 
					for (i = 0; i < j; i++){
						
						temp[i]=rand()%1000;
					}
							 					
					clock_t start = clock();//��ʱ��ʼ 
						RadixCountSort(temp,j);
					clock_t diff=clock() - start;//��ʱ���� 	
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
					free(temp);	
					
			} 
			
			if(i==7){
				
					printf("������������Ҫ���Ե���������10000 50000 200000��\n");
					scanf("%d",&j);
					
					int *temp;
					temp = (int *)malloc(j*sizeof(int));;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						temp[i] = rand()%3; 
					}
					printf("\n");
										 					
					clock_t start = clock();//��ʱ��ʼ 
							ColorSort(temp,j);
					clock_t diff=clock() - start;//��ʱ���� 
													
					printf("��������Ҫ����ʱ��%d����\n",diff);
					printf("\n");
														
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
					free(temp);						
			}  						
			
			if(i==0)
				break;
	}
 

	 
	
	
} 
