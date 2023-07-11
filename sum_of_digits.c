#include <stdio.h>
int main()
	{
        int n,n1,n2,n3,n4,n5,sum;
		printf("Enter 5 digit number=");
		scanf("%d",&n);
		n5=n%10;
		n=n/10;
		n4=n%10;
		n=n/10;
		n3=n%10;
		n=n/10;
		n2=n%10;
		n=n/10;
		n1=n%10;
		sum=n1+n2+n3+n4+n5;
		printf("sum of digits=%d",sum);
	}
