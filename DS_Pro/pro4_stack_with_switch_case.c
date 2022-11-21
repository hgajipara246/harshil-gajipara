#include<stdio.h>
#include<conio.h>
#define n 5
int a[n],top=-1,i;

int lastinsert()
{
    int val;
    if(top==n-1)
        printf("\n Stack is Full");
    else
    {
        printf("\n Enter Value For Insert:");
            scanf("%d",&val);
        a[++top]=val;
    }
}

int display()
{
    for(i=0;i<=top;i++)
    {
        printf("\n %d",a[i]);
    }
}

int lastdelete()
{
    if(top<0)
        printf("\n Stack is Empty");
    else
    {
        a[--top];
    }
}

int firstinsert()
{
    int val;
    if(top==n-1)
        printf("\n Stack is Full");
    else
    {
        printf("\n Enter Value For First Insert:");
        scanf("%d",&val);
        for(i=n-1;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
        top++;
    }
}

int firstdelete()
{
    if(top<0)
        printf("\n Stck is Empty");
    else
    {
        for(i=0;i<=n;i++)
        {
            a[i]=a[i+1];
        }
        --top;
    }
}

int middleinsert()
{
    int val;
    if(top==n-1)
        printf("\n Stack is Full");
    else
    {
        printf("\n Enter Value For Middle Insert:");
            scanf("%d",&val);
        for(i=n;i>n/2;i--)
        {
            a[i]=a[i-1];
        }
    a[n/2]=val;
    ++top;
    }

}

int middledelete()
{
    
    if(top<0)
        printf("Stack is Empty");
    else
    {
       for(i=n/2;i<=n;i++)
        {
            a[i]=a[i+1];
        }
        --top;
        
    }

}

int main()
{
    int ch;
    do
    {
        printf("\n 1.LastInsert \n 2.Display \n 3.LastDelete \n 4.First Insert \n 5.First Delete \n 6.Middle Insert \n 7.Middle Delete \n 0.Exit");
        printf("\n Enter Your Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            lastinsert();
            break;

            case 2:
            display();
            break;

            case 3:
            lastdelete();
            break;

            case 4:
            firstinsert();
            break;

            case 5:
            firstdelete();
            break;

            case 6:
            middleinsert();
            break;

            case 7:
            middledelete();
            break;

            case 0:
            break;

            default:
            printf("Wrong Choice!");
        }
    }while(ch!=0);
}