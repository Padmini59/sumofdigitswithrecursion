#include<stdio.h>
#include<math.h>
int sum(int n);
main()
{
	int n;//here n is the input number//
	printf("Enter the number:");
	scanf("%d",&n);
	printf("sum of n digit = %d",sum(n));
	
}
int sum(int n)
{
if(n>0)
return(n%10+sum(n/10));
else
return 0;
	
}
