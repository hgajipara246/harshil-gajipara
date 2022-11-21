#include <stdio.h>
#define n 10

int binary(int val)
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int low,high,mid,i;
    // for(i=0;i<n;i++)
    // {
    //     printf("\n Enter Element:");
    //         scanf("%d",&a[i]);
    // }
    printf("\n Element are :");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }

    low=0;
    high=n-1;
   
    while(low<=high)
    {
    mid=(low+high)/2;
        if(a[mid]==val)
        {
            return mid+1;
            // return 1;
        }
        else if(a[mid]<val)
        {
            low=mid+1;
        }
        else 
            high=mid-1;
    }
    return -1;

}
int main()
{
   
    int b,val;  

    printf("\nEnter value To Find:");
    scanf("%d",&val);
    
    b=binary(val);
    if(b==-1)
        printf("\n Search UnSuccessfull");
    else    
        printf("\n Search successfull");
    
        
} 

