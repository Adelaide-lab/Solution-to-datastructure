#ifndef __BINTREE__
#define __BINTREE__
#include "BinTree.h"

TreeNode create() 		//To crate a binary tree automatically(Not exactly)
{
	int val;
	printf("Please Enter a Number(0 for stop):");
	scanf("%d",&val);
	TreeNode root=(TreeNode)malloc(sizeof(TreeNode));
	
	if(root==NULL)
		{
			printf("NO ENOUGH SPACE!");
			}
	else	if(val!=0)
				{			
					root->leftChild=create();
					printf("left\n");   
					root->rightChild=create();
					printf("right\n");
					}
			else
				{
					printf("0\n");
					return NULL;
					}

	return root;  //Return root of the tree
}


int IsEmpty(TreeNode Bt) //Judge wether the node is empty
{
	if(Bt==NULL)
	return TRUE;
	else
	return FALSE;
}

TreeNode MakeBt(TreeNode Bt)
{
	if(!IsEmpty(Bt))
		{
			printf("Please enter a string you want:");
			gets(Bt->string);
			MakeBt(Bt->leftChild);
			MakeBt(Bt->rightChild);
			return Bt;
			}
	else
		return;
}

void inorder(TreeNode ptr)
{
	if(IsEmpty(ptr))
		return;
	else{
		inorder(ptr->leftChild);
		printf("%s ",ptr->string);
		inorder(ptr->rightChild);
	}
}

void preorder(TreeNode ptr)
{
	if(IsEmpty(ptr))
		return;
	else{
		printf("%s ",ptr->string);
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

void postorder(TreeNode ptr)
{
	if(IsEmpty(ptr))
		return;
	else{
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		printf("%s ",ptr->string);
	}
}

TreeNode copy(TreeNode original)
{
	TreeNode temp=(TreeNode)malloc(sizeof(TreeNode));
	if(original){
		temp->leftChild=copy(original->leftChild);
		temp->rightChild=copy(original->rightChild);
		strcpy(temp->string,original->string);
		return temp;
	}
	return NULL;
}

int IsEqual(TreeNode First,TreeNode Second)
{
	
	if(!First&&!Second)
		return 1;
		if(strcmp(First->string,Second->string))
			if(IsEqual(First->leftChild,Second->rightChild)&&IsEqual(First->rightChild,Second->rightChild))
				return 1;
			else 
				return 0;
}


#endif 
