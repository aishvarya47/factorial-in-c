//c program to find the factorial of a number//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,fact=1;
	printf("ENTER THE NUMBER TO FIND FACTORIAL:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("THE FACTORIAL OF %d is %d",num,fact);
	return 0;
}
	
