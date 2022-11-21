#include <stdio.h>
#include <conio.h>

#define n 5
int a[n],i;
int top=-1;

void insert(int val)
{
    if(top>=n-1)
    {   
        printf("\n Stack is Full");    
    }
    else
    {
        a[++top]=val;    
    }   
}

void delete(int val)
{
    if(top==-1)
        printf("\n Stack is Empty:");
    else
        a[--top]=val;
}

void print()
{
    for(i=0;i<=top;i++)
        printf("\n %d",a[i]);
}

int main()
{
    insert(11);
    insert(12);
    insert(13);
    print();
    insert(14);
    insert(15);
    insert(16);
    print();
    delete(12);
    return 0;
}