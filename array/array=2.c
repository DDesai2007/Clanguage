#include<stdio.h>
int main()
{
	int a[]={10,20,30,25,15};
	int  i,j=0;
	for(i=0;i<=4;i++) 
	{
		j += a[i];
	}

	printf("%d ",j);
	return 0;
}
