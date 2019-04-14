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
				
					printf("请输入你所需要数组的长度：");
										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int)); 
				    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					insertSort(temp,j);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);
					continue ;
			}
					
			if(i==2){
				
					printf("请输入你所需要数组的长度：");
										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
					
					int *a;
					a=(int *)malloc(j*sizeof(int));
				    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					MergeSort(temp,0,j-1,a);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",a[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(a);
					continue ;
			} 
			
			if(i==3){
				
					printf("请输入你所需要数组的长度：");
										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					QuickSort_Recursion(temp,0,j-1);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;
					
			} 
			
			if(i==4){
				
					printf("请输入你所需要数组的长度：");
										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					QuickSort_Recursion(temp,0,j-1);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;	
					
			}//非递归的快速排序还没有实现 
			
			
			if(i==5){
				
					printf("请输入你所需要数组的长度：");
										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						
   						scanf("%d",&temp[i]);   						
						if(i == 0)   m = temp[i] ;
						
						if(i != 0){
							if(temp[i] > m)
								m = temp[i];//找到最大的数字 
							
						}
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					CountSort(temp,j,m);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;	
					
			}			
					
			if(i==6){
				
					printf("请输入你所需要数组的长度：");
					
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输，输入三位数）：\n");					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					RadixCountSort(temp,j);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;
			} 
			
			if(i==7){
				
					printf("请输入你所需要数组的长度：");										
					scanf("%d",&j);
					
					printf("请输入数组元素（一个一个输，输入0，1或者2）：\n");
					
					int *temp;
					temp=(int *)malloc(j*sizeof(int));
									    				  
   					for (i = 0; i < j; i++){
   						scanf("%d",&temp[i]) ;
					}
					printf("\n");			
					
					printf("你所输入的数组为：");
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);			
										
					printf("\n");
					
					ColorSort(temp,j);
					
					printf("重新排序后的数组为：");
					
					for(i=0;i<j;i++)
						printf("%d ",temp[i]);
						
					printf("\n");						
					printf("按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
					free(temp);	
					continue ;					
			}  						
			
			if(i==0)
				break;
	}
 

	 
	
	
} 
