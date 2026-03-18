#include<stdio.h>
int main()
{
	int arr[100],n,i,key;
	int low,high,mid;
	int found = 0;
	
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	
	printf("Enter Sorted Array Elements:\n");
	
	for(i=0; i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Element to Search: ");
	scanf("%d",&key);
	
	low = 0;
	high = n-1;
	
	while(low <=high)
	{
		mid = (low + high) / 2;
		
		if(arr[mid] == key)
	{
		printf("Element Found at Position %d", mid+1);
		found=1;
		break;
	}
	else if(key < arr[mid])
	{
		high = mid - 1;		
	}
	else
	{
		low = mid + 1;
	}
}
if(found == 0)
{
	printf("Element not Found");
}
return 0;
}
