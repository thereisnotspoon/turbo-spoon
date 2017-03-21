#include <stdio.h>

typedef struct node
{
    int n;
    struct node *next;
}
node;

bool search(node *list, int n);

int main()
{
    

    return 0;
}



bool search(node *list, int n)
{
    node* ptr = list;

    while (ptr != NULL)
    {
        if (ptr -> n == n)
	{
	    return true;
	}
	ptr = ptr->next;
    }
    return false;
}
