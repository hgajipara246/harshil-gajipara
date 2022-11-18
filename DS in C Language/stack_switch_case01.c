#include <stdio.h>
#define n 5
int a[n];
int top = -1;
void dis()
{
	if (top < 0)
		printf("Array is empty....");
	else
	{
		for (int i = 0; i <= top; i++)
			printf("%d ", a[i]);
	}
	printf("\n");
}
int insertEnd(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else
        a[++top] = val;
}
int insertFirst(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else
	{
        for (int i = n; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
        
    }
}
void insertmid(int val)
{
	if (top >= n - 1)
		printf("Array is Full....");
	else
		{
			for (int i = n; i >= (n/2); i--)
			{
				a[i] = a[i-1];
			}
			a[n/2] = val;
			++top;
		}
}
int main()
{
	int ch,a;
	printf("1. Insert at End");
	printf("\n2. Insert at First");
	printf("\n3. Insert at Mid");
	printf("\n4. Delete at End");
	printf("\n5. Delete at mid");
	printf("\n6. Delete at first");
	printf("\n7. Display Array");

	do
	{
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
		case 1:
			printf("Enter element: ");
			scanf("%d",&a);
			insertEnd(a);
			break;
		case 2:
			printf("Enter element: ");
			scanf("%d",&a);
			insertFirst(a);
			break;
		case 3:
			printf("Enter element: ");
			scanf("%d",&a);
			insertmid(a);
			break;
		case 7:
			dis();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (ch!=0);
	
}