#include<stdio.h>
int main()
{
	int arr[50],n,i,j,temp;
	
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	
	printf("Enter Sorted Array Elements:\n");
	
	for(i=0; i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[i] > arr[j+1])
			{
				temp=arr[i];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("Sorted Array:\n");
	
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	
	return 0;
}
