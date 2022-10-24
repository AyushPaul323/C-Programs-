#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *left,*right;	
};

typedef struct Node TREE;
TREE *root;

TREE *newnode()
{
	TREE *head;
	head=(TREE*)malloc(sizeof(TREE));
	head->left=NULL;
	head->right=NULL;
	return(head);
}
 
TREE *createBT(TREE *root)
{
	char choice;
	if(root==NULL)
	{
		root=newnode();
		printf("Enter the Value:");
		scanf("%d",&root->data);
	}
	printf("\nCurrent Node Value %d",root->data);
	printf("\nDo you have left child");
	fflush(stdin);
	scanf("%c",&choice);
	if(choice=='y')
	{
		root->left=createBT(root->left);
	}
	printf("\nCurrent Node Value: %d",root->data);
	printf("\nDo you have right child");
	fflush(stdin);
	scanf("%c",&choice);
	if(choice=='y')
	{
		root->right=createBT(root->right);
	}
	return(root);
}

inorder(TREE *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

preorder(TREE *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

postorder(TREE *root)
{
	if(root!=NULL)
	{
		preorder(root->left);
		preorder(root->right);
		printf("%d\t",root->data);
	}
}

int main()
{
	int ch;
	printf("Enter your choice:\n 1 to create binary tree \n 2 for inorder traversal \n 3 for preorder traversal \n 4 for postorder traversal \n 5 for exit \n");
	scanf("%d",&ch);
	while(true)
	{
		switch(ch)
		{
			case 1:
				createBT(root);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				exit(1);
				break;
		}
	}
}
