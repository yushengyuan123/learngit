#include "../head/linkedList.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
 
LNode *creat(void)
{
	LNode *p1,*p2,*head;
	int n=0;
	
	
	p1=p2=(LNode *)malloc(sizeof(LNode));
	
	scanf("%d",&p1->data);	
	head=NULL;
	
	
	while(p1->data!=0)
	{
		n++;
		
		if(n==1)head=p1;
		else    {
				
				p2->next=p1;	
				p2=p1;		
		}
		
		p1=(LNode *)malloc(sizeof(LNode));
		scanf("%d",&p1->data);
	}
	free(p1);
	p2->next=NULL;
	return head;

	
}



void showform(void)
{
	int j;
	
	printf("\t\t*************************************************\n");
	for(j=0;j<22;j++)
	{
		printf("\t\t*\t\t\t\t\t\t*\n");
		if(j==1)printf("\t\t*\t在使用功能34678前请先使用2创建链表\t*\n");
		if(j==2)printf("\t\t*\t\t1.InitList\t\t\t*\n");
		if(j==4)printf("\t\t*\t\t2.creat\t\t\t\t*\n");
		if(j==6)printf("\t\t*\t\t3.DestroyList\t\t\t*\n");
		if(j==8)printf("\t\t*\t\t4.ReverseList\t\t\t*\n");
		if(j==10)printf("\t\t*\t\t5.InsertList\t\t\t*\n");
		if(j==12)printf("\t\t*\t\t6.SearchList\t\t\t*\n");
		if(j==14)printf("\t\t*\t\t7.IsLoopList\t\t\t*\n");
		if(j==16)printf("\t\t*\t\t8.Findmidnode\t\t\t*\n");
		if(j==18)printf("\t\t*\t\t0.结束程序\t\t\t*\n");	
		
		
	}
	
	printf("\t\t*************************************************\n");
}

int choose(void)
{
	int k;
	
	scanf("%d",&k);
	return k;
}





Status InitList(LinkedList *L) {
	*L=(LinkedList)malloc(sizeof(LNode));
	(*L)->next=NULL;
	return SUCCESS;
}

/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : L(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void DestroyList(LinkedList *L) {
		LinkedList *tmp;
		
		while((*L)!=NULL)
		{
			(*tmp)=(*L)->next;		
			free(*L);
			(*L)=*tmp;
					
		}	
	
}

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */
Status InsertList(LNode *p, LNode *q) {
	
		LinkedList pnew=p;
		while(pnew->next!=NULL)
		{
			pnew=pnew->next;
		}
		pnew->next=q;
		if(p==NULL||q==NULL)
		return ERROR;
		
		return SUCCESS;
}
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e) {

		LNode *pnew=p;
		pnew=pnew->next;
		if(pnew!=NULL)
		{
	
			return SUCCESS;
		}
		
		return ERROR;
	
}

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit 
 *	@return		 : None
 *  @notice      : None
 */
void TraverseList(LinkedList L, void (*visit)(ElemType e)) {

	LinkedList p=L;
	
	if(p==NULL)	printf("你没有输入东西哦\n");
	while(p!=NULL||p==L)
	{
		visit(p->data);
		p=p->next;
	}
	
}

void solve(ElemType elem) 
{

	printf("%d ",elem);
	
}

/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e 
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
Status SearchList(LinkedList L, ElemType e) {
	
	LinkedList p=L;
	
	
	while(1)
	{		
						 
				
		if(e==(p->data)	)	
			return SUCCESS;
	
		
		if(p==NULL)
			return ERROR;
		
		p=p->next;
		
	}
	
} 

/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list 
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status ReverseList(LinkedList *L) {
	
	int i;
	LinkedList *current=L,*pre,*temp;
		
	(*pre)=NULL;
	
		while((*current)!=NULL)
		{
				*temp=(*current)->next;
				
				(*current)->next=*pre;
				
				*pre=*current;
				
				*current=*temp;
		}
		
		*L=*pre;
	
	return SUCCESS;
	
}

/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status IsLoopList(LinkedList L) {
	
	LinkedList fast=L->next,slow=L;
		
		while(fast!=NULL)
		{
			while(slow!=NULL)
			{			
           			 if(fast == slow)
               			 	return SUCCESS;
            }
            slow = slow->next;
        }
        fast = fast->next;			
				
		return ERROR;
			
}

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish 
 */
LNode* ReverseEvenList(LinkedList *L) {
	
}

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish 
 */
LNode* FindMidNode(LinkedList *L) {
	
	LinkedList p,mid;
    mid = p= *L;
    while (p->next != NULL)
	{ 
        if (p->next->next!=NULL) 
		{
            p = p->next->next;
            mid = mid->next;
        } 
        else
            p = p->next;
    }
    
    return mid;

}
