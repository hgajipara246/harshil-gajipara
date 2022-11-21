#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;

void print()
{
    struct node *ptr;
     if (head == NULL)
    {
        printf("\nUndeflow..");
    }

    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
       
    printf("\n");
    }
}

void insertend(int val)
{
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data =val;

    if(head==NULL)
    {
       temp->next=NULL;
       temp->prev=NULL;
       head=temp;
       return;
    }
    else{
        while(ptr->next !=NULL)
            ptr=ptr->next;
            ptr->next=temp;
            temp->prev=ptr;
            temp->next=NULL;
            return;
    }
}

void deleteend()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("Already Empty..");
    else if(head->next ==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->prev->next=NULL;
            free(ptr);
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    print();
    deleteend();
    print();
}