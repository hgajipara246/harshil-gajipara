
#include<stdio.h>

int linear(int a[], int val)
{
	int mid;
	int low = 0, high = n-1;
	while(low<=high)
	{
	    mid = (low + high)/2;
		if(a[mid] == val)
			return mid + 1;
		else if(a[mid] < val)
			low = mid + 1;
		else
			high = mid -1;
	}
	return -1;	
}
int main()
{
     int a[n],i,x;
     for(i=0; i<n; i++)
	   a[i] = rand()%99+1;

	printf("Array is: \n");
     for(i=0; i<n; i++)
	printf("%d ",a[i]);
     
    printf("\nEnter Serach Element: ");
	scanf("%d",&x);
	int res = Binary(a,x);
	//res == -1 ? printf("Element is not found") : printf("Element is found at %d position",res);	
	if (res == -1)
		printf("Element is not found");
	else
		printf("Element is found at %d position ",res);
}