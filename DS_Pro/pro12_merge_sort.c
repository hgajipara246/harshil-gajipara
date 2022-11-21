#include <stdio.h>
#include <stdlib.h>

void mergesearch(int a[],int l ,int mid,int h)
{
    int b[50],i,j,k;
    i=l,k=l,j=mid+1;
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else 
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=h)
        b[k++]=a[j++];
    for(i=l;i<=h;i++)
        a[i]=b[i];
}

void mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        mergesearch(a,l,mid,h);
    }
}

void main()
{
    int a[20],n=15,i;
    for(i=0;i<n;i++)
        a[i]=rand()%99+1;

    printf("\n Before Sorting array:");
    for(i=0;i<n;i++)
        printf("\t %d",a[i]);

    mergesort(a,0,n-1);    

    printf("\n After Sorting Array:");
    for(i=0;i<n;i++)
        printf("\t %d",a[i]);
}