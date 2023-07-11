#include <stdio.h>
int main()
{
	long int n,rev;
	int n1,n2,n3,n4,n5;
	printf("Enter five digit number:");
	scanf("%ld",&n);
	n5=n%10;
	n=n/10;
	n4=n%10;
	n=n/10;
	n3=n%10;
	n=n/10;
	n2=n%10;
	n=n/10;
	n1=n%10;
	n=n/10;
	rev=n5*10000+n4*1000+n3*100+n2*10+n1;
	printf("reversed number=%ld",rev);	
	}
