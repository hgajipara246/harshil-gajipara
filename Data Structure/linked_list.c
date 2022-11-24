//  Self refrefial Node ...... Linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int n;
    char p;
    struct node *ptr;
};

int main()
{
    struct node a,b,c;
    a.n = 65;
    a.p = 'A';
    a.ptr = NULL;
    b.n = 66;
    b.p = 'B';
    b.ptr = NULL;
    c.n = 67;
    c.p = 'C';
    c.ptr;
    
    printf("Var1 : %d\t%c\t",a.n,a.p);
    printf("\nVar2 : %d\t%c",b.n,b.p);
    printf("\nVar3 : %d\t%c",c.n,c.p);
    printf("\n");
    
    a.ptr = &b;
    printf("\nPointer A is link with pointer B");
    printf("\nVar1 : %d\t%c",a.ptr->n,a.ptr->p);
    printf("\n");
    
    b.ptr = &c;
    printf("\nPointer b is link with pointer c");
    printf("\nVar2 : %d\t%c",b.ptr->n,b.ptr->p);
    
}