#include <stdio.h>
#include <conio.h>
#define n 5
int a[n];
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
        printf("\n %d",val);
    }   
}

int main()
{
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    return 0;
}