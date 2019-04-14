#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/qgsort.h"
#include <math.h>

void insertSort(int *a,int n){
	int i;
	int j;
	int temp; 
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){  
			if(a[j]>a[i]){
				temp=a[i];
				
				a[i]=a[j];
				
				a[j]=temp;
			}
		}
	}
}

	
void MergeArray(int *a,int begin,int mid,int end,int *temp){
	
	int i,index;
	int fir1,last1;
	int fir2,last2;
   
	fir1 = begin;
	last1 = mid;
	fir2 = mid+1;
	last2 = end;
	index = 0;
	
	while( (fir1 <= last1) && (fir2 <= last2) ){
  
		if( a[fir1] < a[fir2] )
		{
			temp[index++] = a[fir1];
			fir1++;
		} else{
			temp[index++] = a[fir2];
			fir2++;
		}
    }
  
	while( fir1 <= last1 ){	
		temp[index++] =a[fir1++];
	}
	
	while( fir2 <= last2 ){
		temp[index++] = a[fir2++];
	}
	
	
	for( i=0; i<(end-begin+1); i++){
		a[begin+i] = temp[i];
	}
				
}

void MergeSort(int *a,int begin,int end,int *temp){
	
	int mid=0;
	
	if(begin<end){
		
		mid=(begin+end)/2;
		MergeSort(a,begin,mid,temp);
		MergeSort(a,mid+1,end,temp);
		MergeArray(a,begin,mid,end,temp);
	}
			
}//调试成功

void QuickSort_Recursion(int *a, int begin, int end){
	if (begin < end)
    {
        int i = begin, j = end, pivot = a[begin];
        while (i < j)
        {
            while (i < j && a[j] >= pivot)
            {
                j--;
            }
			
            a[i] = a[j];
			
            while (i < j && a[i] <= pivot)
            {
                i++;
            }
			
            a[j] = a[i];
        }
        a[i] = pivot;
        QuickSort_Recursion(a, begin, i - 1);
        QuickSort_Recursion(a, i + 1, end);
    }

}//调试成功

void QuickSort(int *a,int size){
	

	
}

int Partition(int *a, int begin, int end){
		
    int pivot = a[begin];
    while(begin < end)
    {
        while(begin < end && a[--end] >= pivot);
        a[begin] = a[end];
        while(begin < end && a[++begin] <= pivot);
        a[end] = a[begin];
    }
    a[begin] = pivot;
    return begin;
	
}

void CountSort(int *a, int size , int max){
	
	int *counts;
    int *temp;
        
    int i,j;
    
    /*为计数器数组分配空间*/
	counts = (int *)malloc((max+1)* sizeof(int));
   
    
    /*为已排序元素临时存放数组分配空间*/
	temp = (int *)malloc(size * sizeof(int));
     
    /*初始化计数数组*/
    for(i = 0; i <= max; i++)
    {
        counts[i] = 0;        
    }
    
    /*统计每个元素出现的次数（counts的下标索引即是要统计的元素本身）*/
    for(j=0; j<size; j++)
        counts[a[j]]=counts[a[j]] + 1;
    
    /*将元素本身的次数加上它前一个元素的次数(得到元素偏移量)*/
    for(i = 1; i <= max; i++)
        counts[i]=counts[i] + counts[i-1];
    
    /*使用上面得到的计数数组去放置每个元素要排序的位置*/
    for(j = size -1; j >= 0; j--)
    {
        temp[counts[a[j]]-1] = a[j];      /*counts的值是元素要放置到temp中的偏移量*/
        counts[a[j]] = counts[a[j]] - 1;  /*counts的计数减1*/
    }
    
    /*将ctsort已排序的元素从temp拷贝回data*/
    memcpy(a,temp,size * sizeof(int));
    
    /*释放前面分配的空间*/
    free(counts);
    free(temp);
     
}//调试成功

void RadixCountSort(int *a,int size){
	
	int *counts, *temp;
    int index, pval, i, j, n;
    
    /*为计数器数组分配空间*/
    counts = (int *)malloc(10 * sizeof(int));
       
    /*为已排序元素集分配空间*/
    temp = (int *)malloc(size * sizeof(int));
        
    /*从元素的最低位到最高位开始排序*/
    for(n=0; n<3; n++)
    {
        /*初始化计数器*/
        for(i=0; i<10; i++)
            counts[i] = 0;
        /*计算位置值（幂运算k的n次方）*/
        pval = pow((double)10,(double)n);
        
        /*统计当前位上每个数值出现的次数*/
        for(j=0; j<size; j++)
        {
            index = (int)(a[j] / pval) % 10;
            counts[index] = counts[index]+1;
        }
        /*计算偏移量（本身的次数加上前一个元素次数）*/
        for(i=1; i<10; i++)
            counts[i] = counts[i] + counts[i-1];
        
        /*使用计数器放置元素位置*/
        for(j=size-1; j>=0; j--)
        {
            index = (int)(a[j] / pval) % 10;
            temp[counts[index]-1] = a[j];
            counts[index] = counts[index] - 1;
        }
        
        /*将已排序元素拷贝回data*/
        memcpy(a, temp, size*sizeof(int));
        
    }
    
    /*释放已排序空间*/
    free(counts);
    free(temp);
    
}//调试成功


void ColorSort(int *a,int size){
	
	int begin = 0;
    int curr = 0;
    int end = size-1;
	int temp;
	
    while (curr<=end) {
        if(a[curr]==0) {
            temp=a[curr];
			a[curr]=a[begin];
			a[begin]=temp;
            begin++;
            curr++;
        }
        else if(a[curr]==1) {
            curr++;
        }
        else {
            temp=a[curr];
			a[curr]=a[end];
			a[end]=temp;
            end--;
        }
    }
   
}//调试成功

void show(void){
	
	printf("1.插入排序  2.归并排序  3.快速排序（递归版)  4.快速排序（非递归版)//未实现  5.计数排序  6.基数基数排序  7.颜色排序  0.结束程序\n"); 
	printf("-----------------------------------------------------------------------------------------------------------------") ; 
}

int choose(void){
	
	int i;
	printf("\n");
	printf("请输入你所需要的功能\n");
	scanf("%d",&i); 
	return i;
}
