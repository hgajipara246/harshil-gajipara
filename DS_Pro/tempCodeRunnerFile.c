#include<stdio.h>
#define n 5
int main()
{
    int a[n],b[n],c[10],i,j;
    for(i=0;i<n;i++)
    {
        printf("\n Enter A[%d]:",i);
            scanf("%d",&a[i]);
    }

    for(j=0;j<n;j++)
    {
        printf("\n Enter B[%d]:",j);
             scanf("%d",&b[j]);
    }

    for(i=0;i<n;i++)
    {
       
        c[i]=a[i];  
    }
    
    for(j=0;j<5;j++)
    {
        c[i++]=b[j];
    }

    printf("\n Merge Array:");
    for(i=0;i<10;i++)
    {
        printf("\n c[%d]:%d",i,c[i]);
    }

}