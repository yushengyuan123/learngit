#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../head/BinaryTree.h"
#include "../head/LQueue.h"

int  main(){
	
	BiTree p;
	int i,k,j;
	char *definition;
	



    while(1){
		
    	
 			show();
			i=choose();			

			if(i==1) {
					
					InitBiTree(p);
					printf("��ʼ���������ɹ�");
					printf("\n");
					printf("��ʼ�����,���������ּ�����");
					scanf("%d",&k);		
					printf("\n");
			}
					
			if(i==2){
				
					DestroyBiTree(p);
					
					if(i==0)
							printf("���ٶ������ɹ�");
					else 
							printf("�������Ѿ�����");
					printf("\n");
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
			} 
			
		
			if(i==3){
					while(getchar()!='\n');
					printf("��ʼ����,��������ĸ��ڵ�(�ڵ�������Ϊ�ַ�������#�������ӽڵ�)��\n");					
					CreateBiTree(&p,definition);								
					printf("�����������ɹ�,���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
			}
					

			
			if(i==4){
				
				
					printf("ǰ��������Ϊ��");
					j = PreOrderTraverse(p,print);
					printf("\n");				
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
						
		}
			 
			
			
			if(i==5){
					printf("����������Ϊ��");
					InOrderTraverse(p,print); 
					printf("\n");
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");	
					
				
					
			}			
					
			if(i==6){
				
					printf("����������Ϊ��");
					PostOrderTraverse(p,print); 
					printf("\n");
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
					
					
			} 
			
			if(i==7){
					printf("��α������Ϊ��");
					LevelOrderTraverse(p,print); 
					printf("\n");														
					printf("���������ּ�����");
					scanf("%d",&k);
					printf("\n");
									
			}  						
			
			if(i==0)
				break;
	}
	 

}
