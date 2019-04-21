#include <stdio.h>
#include <stdlib.h>
#include "../head/BinaryTree.h"
#include "../head/LQueue.h"

/**
 *  @name        : Status InitBiTree(BiTree T);
 *  @description : ����ն�����T
 *  @param       : �����������T
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
 *  @description : �ݻٶ�����T
 *  @param       : �����������T
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
 *  @description : ���������T
 *  @param       : �����������T, ��������������ַ���definition
 */
Status CreateBiTree(BiTree *T, char *definition){
	//definition��������������
	//����������
	//������definitionӦ�����û�����ı�ʾ���������ַ�������
	definition=(char*)malloc(sizeof(char));
	scanf("%c",definition);
	getchar();
	
    if(*definition == '#')
    {
      	*T=NULL;
      	
    }else{
    	
        *T = (BiTree )malloc(sizeof(BiTNode));
        (*T)->data = *definition;      
		printf("������%c����ڵ�\n",(*T)->data);  		
        CreateBiTree(&(*T)->lchild,++definition); 
		printf("������%c���ҽڵ�\n",(*T)->data);       	 	 
        CreateBiTree(&(*T)->rchild,++definition);       
    }
    
   			
}

/**
 *  @name        : Status PreOrderTraverse(BiTree T, Status (*visit)(TElemType e));
 *  @description : �������������T
 *  @param       : �����������T, �Խ��Ĳ�������visit
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
 *  @description : �������������T
 *  @param       : �����������T, �Խ��Ĳ�������visit
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
 *  @description : �������������T
 *  @param       : �����������T, �Խ��Ĳ�������visit
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
 *  @description : �������������T
 *  @param       : �����������T, �Խ��Ĳ�������visit
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
 *  @description : �Թ������ǰ׺���ʽ��������ֵ
 *  @param       : �����������T
 *  @note        : ���ڽ��ṹ�������ø�Tagֵ��־������������������������
 *                 �ɸ�����Ҫ�������Ӳ���.
 */
int Value(BiTree T);
	
	


Status print(TElemType e){
	printf("%c ",e);
}

void show(void){
	
	printf("1.��ʼ��������  2.���ٶ�����  3.����������  4.ǰ�����  5.�������  6.�������  7.��α���  0.��������\n"); 
	printf("-----------------------------------------------------------------------------------------------------------------") ; 
}

int choose(void){
	
	int i;
	printf("\n");
	printf("������������Ҫ�Ĺ���\n");
	scanf("%d",&i); 
	return i;
}
