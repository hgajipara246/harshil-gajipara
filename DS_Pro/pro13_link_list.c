#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node var1,var2,x;
    var1.data=65;
    var1.ch='A';
    var1.ptr=NULL;

    var2.data=70;
    var2.ch='B';
    var2.ptr=NULL;

    x.data=75;
    x.ch='C';
    x.ptr=NULL;

    var1.ptr=&var2;
    var2.ptr=&x;

    printf("\n var2:%d \t %c",var1.ptr->data,var1.ptr->ch);
    printf("\n x   :%d \t %c",var2.ptr->data,var2.ptr->ch);
    
}