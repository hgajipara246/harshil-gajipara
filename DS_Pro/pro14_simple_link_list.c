#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void print()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("\nUndeflow..");
    }

    else
    {
        while(ptr !=NULL)
        {
            printf("%d \t",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}

void insertend(int val)
{
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data =val;
    temp->next =NULL;

    if(head==NULL)
    {
        head=temp;
        return;
    }

    while(ptr->next !=NULL)
        ptr=ptr->next;
    ptr->next=temp;
    return;
}

void deleteend()
{
    struct node *ptr;
    struct node *prev;
    if(head==NULL)
        printf("Already Empty..");
    else if(head->next ==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        free(ptr);
    }
}

void insertfirst(int val)
{
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }

    else
    {
        temp->next=ptr;
        head=temp;
    }
}

void deletefirst()
{
    struct node *ptr=head;
    
    if(head==NULL)
        printf("Already Empty..");
    
    else
    {
        head=ptr->next;
        free(ptr);
    }
}

 
void midinsert(int val,int pos)
{
    struct node *ptr=head,*prev;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    while(ptr->data!=pos)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=temp;
    temp->next=ptr;
}

void middelet(int pos)
{
    struct node *ptr=head,*prev;
    while(ptr->data!=pos)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;
    free(ptr);
}


int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(45);
    insertfirst(60);
    insertfirst(70);
    midinsert(35,10);
    print();
    middelet(45);
    print();
    // deleteend();
    // deleteend();
    deletefirst();
    print();
}