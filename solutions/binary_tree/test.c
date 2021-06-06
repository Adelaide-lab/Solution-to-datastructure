#include <stdio.h> 
#include "BinTree.h"

int main()
{
	TreeNode Root=(TreeNode)malloc(sizeof(TreeNode));
	int a; 
	Root=create();
	printf("创建完成\n"); 
	Root=MakeBt(Root);
	printf("Please enter a string you want:");
	gets(Root->string);
	printf("先序为：\n");
	preorder(Root);
	printf("\n");
	printf("中序为：\n");
	inorder(Root);
	printf("\n");
	printf("后序为：\n");
	postorder(Root); 
	printf("\n");
	
}
