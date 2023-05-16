#include<stdio.h>
int main()
{
	int a[5],n,i;
	printf(" Enter your array size :-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter your value :-");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d    ",a[i]);
		
	}
	return 0;
}
