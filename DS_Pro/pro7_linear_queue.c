#include <stdio.h>
#define n 5
int f=-1,r=-1,i,a[n];
int insert()
{
    int val;
    printf("\n Enter Value To Insert:");
        scanf("%d",&val);
    if(r>=n-1)
        printf("\n Queue is Full");
    else if(f==-1 && r==-1)
    {
        f=r=0;
        a[r]=val;
    }
    else
        a[++r]=val;

}

int delete()
{
    if(f==-1)
        printf("Queue is Empty");
    else if(f==r)
        f=r=-1;
    else
        ++f;
}


int display()
{
    if(r<0)
        printf("\n Queue is Empty:");
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("\n %d",a[i]);
        }
    }
}


int main()
{
    int ch;
    do{
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
        printf("\n Please Enter Your Choice:");
            scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 0:
                break;
            default:
                printf("\n Wrong Choice!");

        }

    }while(ch!=0);
}