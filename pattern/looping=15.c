#include<stdio.h>
int main()
{
	int r,c;
	
	
	for(r=5;r>=1;r--){
		
		for(c=5;c>=r;c--){
			
			if(c%2==0){
				
				printf("1 ");
			}
			else{
				
				printf("0 ");
			}
			
			
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}
