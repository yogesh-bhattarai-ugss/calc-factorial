#include <stdio.h>
#include <conio.h>
/* WAP to calculate factorial without function. */
int fact(int);
int main()
{
	int a,f,n;
	printf("Enter the number :");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d is %d",n,f);
}

int fact(int n)
{
	if(n<=1)
	return 1;
	else
	return(n*fact(n-1));
}
