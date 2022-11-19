#include <stdio.h>
#include <conio.h>
#define n 10
int main()
{
    int a[n];
    int i, j, temp;

    for (i = 0; i < n; i++)
        a[i] = rand() % 99 - 1;
    printf("Befor Sorted Array : \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n After Sorted Array :\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}