#include <stdio.h>
#include <stdlib.h>
struct BST
{
	int data;
	struct BST *left;
	struct BST *right;
};

typedef struct BST NODE;
NODE *node;
NODE* createtree(NODE *node, int data)
{
	if (node == NULL)
	{
		NODE *temp;
		temp= (NODE*)malloc(sizeof(NODE));
		temp->data = data;
		temp->left = temp->right = NULL;
		return temp;
	}
	if (data < (node->data))
	{
		node->left = createtree(node->left, data);
	}
	else if (data > node->data)
	{
		node -> right = createtree(node->right, data);
	}
	return node;

}

void inorder_recursive(NODE *node)
{
	if(node != NULL)
	{
		inorder_recursive(node->left);
		printf("%d\t", node->data);
		inorder_recursive(node->right);
	}
}

void inorder_non(NODE *node)
{
    NODE *current, *pre;
 
    if (node == NULL)
        return;
 
    current = node;
    while (current != NULL) 
	{
        if (current->left == NULL) 
		{
            printf("%d ", current->data);
            current = current->right;
        }
        else 
		{
            //Find the inorder predecessor of current 
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            // Make current as the right child of itsinorder predecessor 
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            //Revert the changes made in the 'if' part to restore the original tree i.e., fix the right child of predecessor 
            else {
                pre->right = NULL;
                printf("%d ", current->data);
                current = current->right;
            } // End of if condition pre->right == NULL 
        } // End of if condition current->left == NULL
    } // End of while
}

int main()
{
	int data, ch, i, n;
	NODE *root=NULL;
	while (1)
	{
		printf("\n1.Insertion in Binary Search Tree");
		printf("\n2.Inorder traversal with recursion ");
		printf("\n3.Inorder traversal with non recursion");
		printf("\n4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1: 
				printf("\nEnter N value: " );
			    scanf("%d", &n);
				printf("\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n");
				for(i=0; i<n; i++)
				{
					scanf("%d", &data);
					root=createtree(root, data);
				}
				break;
			case 2: 
				printf("\nInorder Traversal with recursion: \n");
				inorder_recursive(root);
				break;
			case 3: 
				printf("\n Inorder traversal without recursion: \n");
				inorder_non(root);
				break;
			case 7: 
				exit(1);
				break;
			default:printf("\nWrong option");
		}
	}
	return 0;
} 

 
