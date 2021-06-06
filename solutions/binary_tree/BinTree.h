#include <stdio.h>
#include <stdlib.h> 
#include <stdint.h>
#include <string.h>
#ifndef __BINTREE_H__
#define __BINTREE_H__
#define TRUE 1
#define FALSE 0

 
typedef struct node* TreeNode; 

struct node{
	char string[10];
	struct node* leftChild;
	struct node* rightChild; 
}; 

TreeNode create();

int IsEmpty(TreeNode Bt);

TreeNode MakeBt(TreeNode Bt);

void preorder(TreeNode ptr);

void inorder(TreeNode ptr);

void postorder(TreeNode ptr);

void iterInorder(TreeNode ptr);

TreeNode copy(TreeNode original);

int IsEqual(TreeNode First,TreeNode Second);

#endif


