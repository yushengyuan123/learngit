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
			
}//���Գɹ�

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

}//���Գɹ�

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
    
    /*Ϊ�������������ռ�*/
	counts = (int *)malloc((max+1)* sizeof(int));
   
    
    /*Ϊ������Ԫ����ʱ����������ռ�*/
	temp = (int *)malloc(size * sizeof(int));
     
    /*��ʼ����������*/
    for(i = 0; i <= max; i++)
    {
        counts[i] = 0;        
    }
    
    /*ͳ��ÿ��Ԫ�س��ֵĴ�����counts���±���������Ҫͳ�Ƶ�Ԫ�ر���*/
    for(j=0; j<size; j++)
        counts[a[j]]=counts[a[j]] + 1;
    
    /*��Ԫ�ر���Ĵ���������ǰһ��Ԫ�صĴ���(�õ�Ԫ��ƫ����)*/
    for(i = 1; i <= max; i++)
        counts[i]=counts[i] + counts[i-1];
    
    /*ʹ������õ��ļ�������ȥ����ÿ��Ԫ��Ҫ�����λ��*/
    for(j = size -1; j >= 0; j--)
    {
        temp[counts[a[j]]-1] = a[j];      /*counts��ֵ��Ԫ��Ҫ���õ�temp�е�ƫ����*/
        counts[a[j]] = counts[a[j]] - 1;  /*counts�ļ�����1*/
    }
    
    /*��ctsort�������Ԫ�ش�temp������data*/
    memcpy(a,temp,size * sizeof(int));
    
    /*�ͷ�ǰ�����Ŀռ�*/
    free(counts);
    free(temp);
     
}//���Գɹ�

void RadixCountSort(int *a,int size){
	
	int *counts, *temp;
    int index, pval, i, j, n;
    
    /*Ϊ�������������ռ�*/
    counts = (int *)malloc(10 * sizeof(int));
       
    /*Ϊ������Ԫ�ؼ�����ռ�*/
    temp = (int *)malloc(size * sizeof(int));
        
    /*��Ԫ�ص����λ�����λ��ʼ����*/
    for(n=0; n<3; n++)
    {
        /*��ʼ��������*/
        for(i=0; i<10; i++)
            counts[i] = 0;
        /*����λ��ֵ��������k��n�η���*/
        pval = pow((double)10,(double)n);
        
        /*ͳ�Ƶ�ǰλ��ÿ����ֵ���ֵĴ���*/
        for(j=0; j<size; j++)
        {
            index = (int)(a[j] / pval) % 10;
            counts[index] = counts[index]+1;
        }
        /*����ƫ����������Ĵ�������ǰһ��Ԫ�ش�����*/
        for(i=1; i<10; i++)
            counts[i] = counts[i] + counts[i-1];
        
        /*ʹ�ü���������Ԫ��λ��*/
        for(j=size-1; j>=0; j--)
        {
            index = (int)(a[j] / pval) % 10;
            temp[counts[index]-1] = a[j];
            counts[index] = counts[index] - 1;
        }
        
        /*��������Ԫ�ؿ�����data*/
        memcpy(a, temp, size*sizeof(int));
        
    }
    
    /*�ͷ�������ռ�*/
    free(counts);
    free(temp);
    
}//���Գɹ�


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
   
}//���Գɹ�

void show(void){
	
	printf("1.��������  2.�鲢����  3.�������򣨵ݹ��)  4.�������򣨷ǵݹ��)//δʵ��  5.��������  6.������������  7.��ɫ����  0.��������\n"); 
	printf("-----------------------------------------------------------------------------------------------------------------") ; 
}

int choose(void){
	
	int i;
	printf("\n");
	printf("������������Ҫ�Ĺ���\n");
	scanf("%d",&i); 
	return i;
}
