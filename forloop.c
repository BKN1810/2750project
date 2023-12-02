// WAP to sum of the series 2+ 5+ 10+ 17+ 26+ ....up to nth term using for loop and also disply nth term value.

#include<stdio.h>
int main() {
	int i,n,sum=0;
	
	printf("\n Enter n:  ");
	scanf("%d",&n);
		
	for(i=1; i<=n; i++)
			sum=sum+(i*i+1);
			
	i--;
	printf("\n The nth term = %d",i*i+1 );
	printf("\n  sum = %d", sum);

return 0;	
 } 
