#include <stdio.h> 
#include "BinTree.h"

int main()
{
	TreeNode Root=(TreeNode)malloc(sizeof(TreeNode));
	int a; 
	Root=create();
	printf("�������\n"); 
	Root=MakeBt(Root);
	printf("Please enter a string you want:");
	gets(Root->string);
	printf("����Ϊ��\n");
	preorder(Root);
	printf("\n");
	printf("����Ϊ��\n");
	inorder(Root);
	printf("\n");
	printf("����Ϊ��\n");
	postorder(Root); 
	printf("\n");
	
}
