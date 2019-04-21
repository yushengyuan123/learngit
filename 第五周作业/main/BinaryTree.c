#include <stdio.h>
#include <stdlib.h>
#include "../head/BinaryTree.h"
#include "../head/LQueue.h"

/**
 *  @name        : Status InitBiTree(BiTree T);
 *  @description : 构造空二叉树T
 *  @param       : 二叉树根结点T
 */
Status InitBiTree(BiTree T){
	
	T=(BiTree)malloc(sizeof(BiTNode));
	T->lchild=NULL;
	T->rchild=NULL;
	if(T!=NULL){
		return SUCCESS;
	}else{
		return ERROR;
	}	
}

/**
 *  @name        : Status DestroyBiTree(BiTree T);
 *  @description : 摧毁二叉树T
 *  @param       : 二叉树根结点T
 */
Status DestroyBiTree(BiTree T){
		
	if(T){	                                          
        DestroyBiTree(T->lchild);
        DestroyBiTree(T->rchild);
        free(T);      
    }
    T = NULL;
    
}
	

/**
 *  @name        : Status CreateBiTree(BiTree T, char* definition);
 *  @description : 构造二叉树T
 *  @param       : 二叉树根结点T, 二叉树先序遍历字符串definition
 */
Status CreateBiTree(BiTree *T, char *definition){
	//definition给出二叉树定义
	//按定义来做
	//我理解的definition应该是用户输入的表示二叉树的字符串序列
	definition=(char*)malloc(sizeof(char));
	scanf("%c",definition);
	getchar();
	
    if(*definition == '#')
    {
      	*T=NULL;
      	
    }else{
    	
        *T = (BiTree )malloc(sizeof(BiTNode));
        (*T)->data = *definition;      
		printf("请输入%c的左节点\n",(*T)->data);  		
        CreateBiTree(&(*T)->lchild,++definition); 
		printf("请输入%c的右节点\n",(*T)->data);       	 	 
        CreateBiTree(&(*T)->rchild,++definition);       
    }
    
   			
}

/**
 *  @name        : Status PreOrderTraverse(BiTree T, Status (*visit)(TElemType e));
 *  @description : 先序遍历二叉树T
 *  @param       : 二叉树根结点T, 对结点的操作函数visit
 */
Status PreOrderTraverse(BiTree T, Status (*visit)(TElemType e)){
			
   if(T!=NULL){
   	 		visit(T->data);
   	 	PreOrderTraverse(T->lchild,visit);
   		PreOrderTraverse(T->rchild,print);
   		
   }
	
}

/**
 *  @name        : Status InOrderTraverse(BiTree T, Status (*visit)(TElemType e));	
 *  @description : 中序遍历二叉树T
 *  @param       : 二叉树根结点T, 对结点的操作函数visit
 */
Status InOrderTraverse(BiTree T, Status (*visit)(TElemType e)){
	
	if(T != NULL){
		
		InOrderTraverse(T->lchild,print);
    		visit(T->data);
   		InOrderTraverse(T->rchild,print);
		return SUCCESS;
	}
	
	return ERROR;	
}

/**
 *  @name        : Status PostOrderTraverse(BiTree T, Status (*visit)(TElemType e)));
 *  @description : 后序遍历二叉树T
 *  @param       : 二叉树根结点T, 对结点的操作函数visit
 */
Status PostOrderTraverse(BiTree T, Status (*visit)(TElemType e)){
	

    if(T==NULL)

        return ERROR;

    PostOrderTraverse(T->lchild,print);

    PostOrderTraverse(T->rchild,print);

    visit(T->data);
    
    return SUCCESS;

}


/**
 *  @name        : Status LevelOrderTraverse(BiTree T, Status (*visit)(TElemType e));
 *  @description : 层序遍历二叉树T
 *  @param       : 二叉树根结点T, 对结点的操作函数visit
 */
Status LevelOrderTraverse(BiTree T, Status (*visit)(TElemType e)){
	
	if(T == NULL)
		return ERROR;
	
	LQueue q;
	
	InitLQueue(&q);
	
	BiTree pt;
	
	
	if(T != NULL){
		
		EnLQueue(&q,T);
		
		while(IsEmptyLQueue(&q)){
			
			pt = DeLQueue(&q);
				visit(pt->data);
			if(pt->lchild != NULL)
				EnLQueue(&q,pt->lchild);
			if(pt->rchild != NULL)
				EnLQueue(&q,pt->rchild);
			
		}
	}
	
	return SUCCESS;
	
}

void InitLQueue(LQueue *Q){
		
		Q->front=(Node *)malloc(sizeof(Node));
		
		if(Q->front!=NULL){
			
				Q->rear=Q->front;
				Q->front->next= NULL;
		}
}

Status IsEmptyLQueue(const LQueue *Q){
	
	if(Q->front == Q->rear)			
			return SUCCESS;
						
	return ERROR;	
}

Status EnLQueue(LQueue *Q, BiTree data){
							
	Node *pnew=(Node *)malloc(sizeof(Node));
	
	if(pnew==NULL) 
			exit(-1);
						
	pnew->data=data;
	
	pnew->next=NULL;
	
	Q->rear->next=pnew;
		
	Q->rear=pnew;
					
} 


BiTree DeLQueue(LQueue *Q){

	Node *pt = Q->front->next;
	
	if(Q->front == Q->rear)
		return NULL;
	
	Q->front->next = pt->next;
	
	if(Q->rear == pt)
		Q->rear = Q->front;
		
	return pt->data;
			

} 

/**
 *  @name        : int Value(BiTree T);
 *  @description : 对构造出的前缀表达式二叉树求值
 *  @param       : 二叉树根结点T
 *  @note        : 可在结点结构体中设置个Tag值标志数字与操作符来构造二叉树，
 *                 可根据需要自行增加操作.
 */
int Value(BiTree T);
	
	


Status print(TElemType e){
	printf("%c ",e);
}

void show(void){
	
	printf("1.初始化二叉树  2.销毁二叉树  3.创建二叉树  4.前序遍历  5.中序遍历  6.后序遍历  7.层次遍历  0.结束程序\n"); 
	printf("-----------------------------------------------------------------------------------------------------------------") ; 
}

int choose(void){
	
	int i;
	printf("\n");
	printf("请输入你所需要的功能\n");
	scanf("%d",&i); 
	return i;
}
