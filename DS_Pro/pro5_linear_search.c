#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 10

int linear(int a[])
{
    int val,i;
    printf("\n Enter element To Find:");
    scanf("%d",&val);

    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
           printf("\n Element Found at %d Position",i+1);
           return i+1;
        }
        
    }
    return -1;
}


int main()
{
    int i,a[n],b;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10+1;
    }
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }

    b==linear(a);
    if(b==-1)
        printf("\n Element Does Not Found");
    else
        printf("\n Element Found Successfully");
}