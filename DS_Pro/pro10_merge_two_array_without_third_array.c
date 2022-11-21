#include <stdio.h>
#define n 5
#define m 10
int i, j;
void main()
{
    int a[n], b[m];
    for (i = 0; i < n; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("b[%d] : ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
         a[i];
    }
    for (j = 0; j < m; j++)
    {
        a[i++]=b[j];
        printf(" %d ", a[j]);
    }
}