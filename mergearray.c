////MERGING OF ARRAY
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,m,n,i,*c,j;
	printf("enter the number of elements of array a and b:\n");
	scanf("%d%d",&n,&m);
	a=malloc(n*sizeof(int));
	b=malloc(m*sizeof(int));
	c=&a[0];
	printf("addressess of a=%lu b=%lu c=%lu\n",a,b,c);
	printf("enter the elements of array a:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c++;
		
	}
	printf("\naddressess of a=%lu b=%lu c=%lu \n",a,b,c);
	printf("\nenter the elements of array b:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c++;
	}
	printf("\naddress of c=%lu \n",c);
	c=&a[0];
	printf("\nelements of array a:\n");
        for(i=0,j=0;i<n;i++,j++)
        {
                printf("%d ",a[i]);
		*c=a[i];
	//	printf("c[j]=%d\n ",c[j]); 
		c++;
        }
	printf("\n addressess of c is %lu \n",c);
	printf("\n");
	printf("elements of array b:\n");
	for(i=0,c;i<m;i++)
	{
		printf("%d ",b[i]);
		*c=b[i];
		//printf("c[j]=%d\n",c[j]);
		c++;
	}
	printf("\n");
	printf("after merging array is:\n");
	c=&a[0];
	for(j=0;j<m+n;j++)
	{
		printf("%d ",*c);
		c++;
	}
}



