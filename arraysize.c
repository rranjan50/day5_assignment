//INTEGER ARRAY MEMEORY ALLOCATED
#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*int arr[100],n,i;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("memeory allocated for an integer is %d\n",sizeof(arr));*/
	int *arr,n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("memory allocated for an integer is %d\n",n*(int)sizeof(int));

}


