#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node * root = NULL;
struct node * create_node(int);
void insert(int);
struct node * delete (struct node *, int);
void degree(int);
int search(int);
void odd_nodes(struct node *);
void even_nodes(struct node *);
struct node *smallest_node(struct node *);
struct node *largest_node(struct node *);
int level(int key);
void leafnode(struct node *);
int get_data();
static int cnt=0;
int main()
{
    int userChoice;
    int userActive = 'Y';
    int data;
    struct node* result = NULL;

    while (userActive == 'Y' || userActive == 'y')
    {
	printf("\n\n------- Binary Search Tree ------\n");
	printf("\n1. Insert");
	printf("\n2. Max Node ");
	printf("\n3. Min node ");
	printf("\n4. Search ");
	printf("\n5. Odd ");
	printf("\n6. Even ");
	printf("\n7. Total leaf nodes");
	printf("\n8. Level of nodes ");
	printf("\n9. Degree of nodes ");
	printf("\n10. Delete ");
	printf("\n11.Exit ");
	printf("\n\nEnter Your Choice: ");
	scanf("%d", &userChoice);
	printf("\n");

switch(userChoice)
	{
	case 1:
		data = get_data();
		insert(data);
		break;
	case 2:
		result = largest_node(root);
		if (result != NULL)
		{
		    printf("\nLargest Data: %d\n", result->data);
		}
		break;
	case 3:
		result = smallest_node(root);
		if (result != NULL)
		{
		    printf("\nSmallest Data: %d",result->data);
		}
		break;
	case 4:

		data = get_data();
		if (search(data) == 1)
		{
		    printf("\nData was found!\n");
		}
		else
		{
		    printf("\nData does not found!\n");
		}
		break;

	case 5 :
		odd_nodes(root);
		break;

	case 6 :
		even_nodes(root);
		break;

	case 7:
		       cnt=0;
		       leafnode(root);
		       printf("Total leaf node=%d",cnt);
		       break;

	case 8 :
		data = get_data();
		printf("level = %d",level(data));
		break;
	case 9 :
		data=get_data();
		degree(data);
		break;
	case 10 :
		data = get_data();
		root = delete(root, data);
		break;
	case 11:
		exit(0);
		break;

	 default:
		printf("\n\tInvalid Choice\n");
		break;
	}

	printf("\n__________\nDo you want to continue? ");
	fflush(stdin);
	scanf(" %c", &userActive);
    }
return 0;
}



struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {
	printf("\nMemory for new node can't be allocated");
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
	    printf("\n* node having data %d was inserted\n", data);
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


struct node *delete (struct node *root, int key)
{
struct node *temp;
    if (root == NULL)
    {
	return root;
    }
    if (key < root->data)
    {
	root->left = delete (root->left, key);
    }
    else if (key > root->data)
    {
	root->right = delete (root->right, key);
    }
    else
    {
	if (root->left == NULL)
	{
	    struct node *temp = root->right;
	    free(root);
	    return temp;
	}
	else if (root->right == NULL)
	{
	    struct node *temp = root->left;
	    free(root);
	    return temp;
	}
	 temp = smallest_node(root->right);
	root->data = temp->data;
	root->right = delete (root->right, temp->data);
    }
    return root;

}


void degree(int key)
{
int child=0;
    struct node *temp = root;

    while (temp != NULL)
    {
	if (key == temp->data)
	{
	    if(temp->left==NULL&&temp->right==NULL)
	     child=0;
	    else
	    if(temp->left!=NULL&&temp->right!=NULL)
		child=2;
	    else
		child=1;
		break;
	}
	else if (key > temp->data)
	{
	    temp = temp->right;
	}
	else
	{
	    temp = temp->left;
	}

    }
    printf("Total child=%d",child);
}

int level(int key)
{
    struct node *temp = root;
	int levelcnt=1;
    while (temp != NULL)
    {
	if (key == temp->data)
	{
		    return levelcnt ;
	}
	else if (key > temp->data)
	{
	    temp = temp->right;
		levelcnt++;
	}
	else
	{
	    temp = temp->left;
		levelcnt++;
	}
    }
    return 0;
}



struct node *smallest_node(struct node *root)
{
    struct node *curr = root;
    while (curr != NULL && curr->left != NULL)
   {
	curr = curr->left;
    }
    return curr;
}


struct node *largest_node(struct node *root)
{
    struct node *curr = root;
    while (curr != NULL && curr->right != NULL)
    {
	curr = curr->right;
    }
    return curr;
}


void leafnode(struct node *root)
{
	if(root==NULL)
	{
	return;
	}
	leafnode(root->left);
	if(root->left==NULL && root->right == NULL)
		cnt++;
	leafnode(root->right);

       //	printf("\nCount = %d",cnt);

}

void even_nodes(struct node *root)
{

    if (root == NULL)
    {
	return;
    }
    even_nodes(root->left);
   if(root->data%2==0)
	   printf("%d ",  root->data);
    even_nodes(root->right);
}



void odd_nodes(struct node *root)
{

    if (root == NULL)
    {
	return;
    }
    odd_nodes(root->left);
   if(root->data%2!=0)
	   printf("%d ",  root->data);
    odd_nodes(root->right);
}


int search(int key)
{
    struct node *temp = root;

    while (temp != NULL)
    {
	if (key == temp->data)
	{
	    return 1;
	}
	else if (key > temp->data)
	{
	    temp = temp->right;
	}
	else
	{
	    temp = temp->left;
	}
    }
    return 0;
}

