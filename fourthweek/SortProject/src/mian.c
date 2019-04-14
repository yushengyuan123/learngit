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
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");					
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
					
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
			}
					
			if(i==2){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
					
					int *temp;//定义一个暂存的数组 
					temp = (int *)malloc(j*sizeof(int));
					 					
					clock_t start = clock();//计时开始 
						MergeSort(a,0,j-1,temp);
					clock_t diff = clock() - start;//计时结束 
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
					free(temp);
					
					free(a);
			} 
			
			if(i==3){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
										 					
					clock_t start = clock();//计时开始 
						QuickSort_Recursion(a,0,j-1);
					clock_t diff=clock() - start;//计时结束 
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
					
					free(a);
			}
			
			if(i==4){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%11; ;
					}
					printf("\n");
										 					
					clock_t start = clock();//计时开始 
						QuickSort_Recursion(a,0,j-1);
					clock_t diff = clock() - start;//计时结束 
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
					free(a);	
					
			}//非递归的快速排序还没有实现 
			
			
			if(i==5){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *a;
					a = (int *)malloc(j*sizeof(int));;;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						a[i] = rand()%100; 
					}
					printf("\n");
										 					
					clock_t start = clock();//计时开始 
							CountSort(a,j,99);
					clock_t diff=clock() - start;//计时结束 
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
					
					free(a);
					
			}			
					
			if(i==6){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
					
					srand(time(NULL));					 
					for (i = 0; i < j; i++){
						
						temp[i]=rand()%1000;
					}
							 					
					clock_t start = clock();//计时开始 
						RadixCountSort(temp,j);
					clock_t diff=clock() - start;//计时结束 	
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
					free(temp);	
					
			} 
			
			if(i==7){
				
					printf("请输入你所需要测试的数量级（10000 50000 200000）\n");
					scanf("%d",&j);
					
					int *temp;
					temp = (int *)malloc(j*sizeof(int));;
					
					srand(time(NULL));
					
					for (i = 0; i < j; i++){
   						temp[i] = rand()%3; 
					}
					printf("\n");
										 					
					clock_t start = clock();//计时开始 
							ColorSort(temp,j);
					clock_t diff=clock() - start;//计时结束 
													
					printf("插入所需要的用时：%d毫秒\n",diff);
					printf("\n");
														
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
					free(temp);						
			}  						
			
			if(i==0)
				break;
	}
 

	 
	
	
} 
