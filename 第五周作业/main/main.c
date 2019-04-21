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
					printf("初始化二叉树成功");
					printf("\n");
					printf("初始化完成,按任意数字键返回");
					scanf("%d",&k);		
					printf("\n");
			}
					
			if(i==2){
				
					DestroyBiTree(p);
					
					if(i==0)
							printf("销毁二叉树成功");
					else 
							printf("二叉树已经销毁");
					printf("\n");
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
			} 
			
		
			if(i==3){
					while(getchar()!='\n');
					printf("开始种树,请输入你的根节点(节点数据域为字符，输入#代表无子节点)：\n");					
					CreateBiTree(&p,definition);								
					printf("创建二叉树成功,按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
			}
					

			
			if(i==4){
				
				
					printf("前序遍历结果为：");
					j = PreOrderTraverse(p,print);
					printf("\n");				
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
						
		}
			 
			
			
			if(i==5){
					printf("中序遍历结果为：");
					InOrderTraverse(p,print); 
					printf("\n");
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");	
					
				
					
			}			
					
			if(i==6){
				
					printf("后序遍历结果为：");
					PostOrderTraverse(p,print); 
					printf("\n");
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
					
					
			} 
			
			if(i==7){
					printf("层次遍历结果为：");
					LevelOrderTraverse(p,print); 
					printf("\n");														
					printf("按任意数字键返回");
					scanf("%d",&k);
					printf("\n");
									
			}  						
			
			if(i==0)
				break;
	}
	 

}
