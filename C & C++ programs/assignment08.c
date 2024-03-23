#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create_node(int);
void insert(int);
void inorder(struct node *);
void postorder(struct node *);
void preorder(struct node *);
int get_data();
int main(){
    int choice;
    int useractive='S';
    int data;
    while(useractive=='S'||useractive=='S'){
        printf("\n1:Insert");
        printf("\n2:Inorder");
        printf("\n3:Preorder");
        printf("\n4:postorder");
        printf("\n5:Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            data=get_data();
            insert(data);
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
            exit(0);
            break;
            default:
            printf("\n invalid choice");
            break;
        }
        printf("\n continue");
        fflush(stdin);
        scanf("%d",&useractive);
    }
    return 0;
}
struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {
	printf("\nMemory not allocated");
	return NULL;
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
int get_data()
{
    int data;
    printf("\nEnter Data: ");
    scanf("%d", &data);
    return data;
}
void insert(int data)
{
struct node *temp,*prev;
    struct node *new_node = create_node(data);

    if (new_node != NULL)
    {
	
	if (root == NULL)
	{
	    root = new_node;
	    printf("\n %d inserted\n", data);
	    return;
	}

	 temp = root;
	 prev = NULL;

	
	while (temp != NULL)
	{
	    prev = temp;
	    if (data > temp->data)
	    {
		temp = temp->right;
	    }
	    else
	    {
		temp = temp->left;
	    }
	}

	
	if (data > prev->data)
	{
	    prev->right = new_node;
	}
	else
	{
	    prev->left = new_node;
	}

	printf("\n* node having data %d was inserted\n", data);
    }
}
void inorder(struct node * root){
    if(root==NULL){
        return;
    }
        inorder(root->left);
        printf("%d>",root->data);
        inorder(root->right);
}
void  postorder(struct node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d>",root->data);
}
void preorder(struct node * root){
    if(root==NULL){
        return;
    }
    printf("%d>",root->data);
    preorder(root->left);
    preorder(root->right);
}
