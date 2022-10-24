#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>//preprocessor directive
struct node
{
	int data;
	struct node *left,*right;	
};
typedef struct node tree;
tree *root=NULL;
int height(tree*);//finds height of the tree
void printCurrentLevel(tree*, int );

void create_tree(tree *root)
{
	root=NULL;
}

tree*new_node(int value)//creates a new node
{
tree *tmp = (tree *)malloc(sizeof(tree));
tmp->data = value;
tmp->left = tmp->right= NULL;
return tmp;
}

tree* insert(tree *root, int val) // inserting nodes
{
	if (root == NULL) 
	return new_node(val);
	if (val< root->data)
	{
		root->left=insert(root->left, val);
	}
	else if (val > root->data)
	{
		root->right = insert(root->right, val);
	}
	return root;
}

void levelwise_traversal(tree *root)//traversing the tree levelwise
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
    printCurrentLevel(root, i);
}
//Print nodes at a current level
void printCurrentLevel(tree* root, int level)
{
    if (root == NULL)
    return;
    if (level == 1)
    printf("%d ", root->data);
    else if (level > 1) 
	{
    	printCurrentLevel(root->left, level - 1);
    	printCurrentLevel(root->right, level - 1);
    }
}
int height(tree* node)
{
    if (node == NULL)
    return 0;
    else 
	{
        //compute the height of each subtree
        int lheight = height(node->left);
        int rheight = height(node->right);
        // use the larger one 
        if (lheight > rheight)
        return (lheight + 1);
        else
        return (rheight + 1);
    }
}
int leafnodes(tree *root)//find the no of leaf nodes of the tree
{
	if(root==NULL)
	return 0;
	if((root->left==NULL)&&(root->right==NULL))
	return 1;
	else
	return(leafnodes(root->left)+leafnodes(root->right));
}
tree *mirrorimage(tree *root)//find mirror image of the tree
{
	tree *ptr;
	if(root!=NULL)
	{
		mirrorimage(root->left);
		mirrorimage(root->right);
		ptr=root->left;
		root->left=root->right;
		root->right=ptr;
	}
}
int main()
{	
	int ch,val;
    tree *ptr;
    create_tree(root);
    while(1)
    {
       	printf("\n1.Insert Element to create a binary search tree");
       	printf("\n2.Levelwise traversal");
      	printf("\n3.Count no of leaf nodes");
        printf("\n4.Find mirror image");
		printf("\n5.Exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);//stores choice
		switch(ch)
		{
			case 1:	
				printf("\nEnter value to insert:");
				scanf("%d",&val);
				root=insert(root,val);
				break;
			case 2:	
				printf("\nThe levelwise traversal of the tree  is:");
				levelwise_traversal(root);
				break;
			case 3:	
				printf("\nThe total no of leaf nodes are:%d",leafnodes(root));
				break;
			case 4:	 
				root=mirrorimage(root);
				 break;
			case 5: 	
				exit(1);
				break;
			default:
				printf("Wrong Choice!!");	
		}
	}
	return 0;	
}
	
