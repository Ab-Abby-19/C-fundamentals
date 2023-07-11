#include <stdio.h>
int main()
{
	int n,N,n1,n2,n5,n10,n50,n100;
	printf("Enter the amount=");
	scanf("%d",&n);
	n100=n/100;
	n=n%100;
	n50=n/50;
	n=n%50;
	n10=n/10;
	n=n%10;
	n5=n/5;
	n=n%5;
	n2=n/2;
	n=n%2;
	n1=n/1;
	N=n1+n2+n5+n10+n50+n100;	
	printf("no. of notes=%d",N);
	}
