#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;

void insert_at_end(int data)
{
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
}

void traverse()
{
    struct node*temp;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=head;
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        while(temp!=head);
        printf("\n");
    }
}

int main()
{
    insert_at_end(13);
    insert_at_end(30);
    insert_at_end(14);
    insert_at_end(40);
   
    traverse();
}


output:
13 30 14 40 


=== Code Execution Successful ===

