#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/qgsort.h"
#include <math.h>
#include <time.h>

int main(){
	
	int i,j,k,h,m;
	
	
	while(1){
		
			show();
			i=choose();
			
			if(i==1) {
				
					printf("������������Ҫ����ĳ��ȣ�");
										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣩��\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int)); 
				    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					insertSort(temp,j);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);
					continue ;
			}
					
			if(i==2){
				
					printf("������������Ҫ����ĳ��ȣ�");
										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣩��\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
					
					int *a;
					a=(int *)malloc(j*sizeof(int));
				    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					MergeSort(temp,0,j-1,a);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",a[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(a);
					continue ;
			} 
			
			if(i==3){
				
					printf("������������Ҫ����ĳ��ȣ�");
										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣩��\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					QuickSort_Recursion(temp,0,j-1);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;
					
			} 
			
			if(i==4){
				
					printf("������������Ҫ����ĳ��ȣ�");
										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣩��\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					QuickSort_Recursion(temp,0,j-1);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;	
					
			}//�ǵݹ�Ŀ�������û��ʵ�� 
			
			
			if(i==5){
				
					printf("������������Ҫ����ĳ��ȣ�");
										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣩��\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						
   						scanf("%d",&temp[i]);   						
						if(i == 0)   m = temp[i] ;
						
						if(i != 0){
							if(temp[i] > m)
								m = temp[i];//�ҵ��������� 
							
						}
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					CountSort(temp,j,m);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;	
					
			}			
					
			if(i==6){
				
					printf("������������Ҫ����ĳ��ȣ�");
					
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣬������λ������\n");					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					RadixCountSort(temp,j);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;
			} 
			
			if(i==7){
				
					printf("������������Ҫ����ĳ��ȣ�");										
					scanf("%d",&j);
					
					printf("����������Ԫ�أ�һ��һ���䣬����0��1����2����\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("�������������Ϊ��");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					ColorSort(temp,j);
					
					printf("��������������Ϊ��");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;					
			}  						
			
			if(i==0)
				break;
	}
 

	 
	
	
} 
