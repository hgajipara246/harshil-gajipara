#include<stdio.h>
void pattern()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",a++);
        }
        printf("\n");
    }
}
int main()
{
    pattern();
}