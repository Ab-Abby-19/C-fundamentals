#include<stdio.h>
int main()
{
	int A0h=1189,A0w=841,A1h,A1w,A2h,A2w,A3h,A3w,A4h,A4w,A5h,A5w,A6h,A6w,A7h,A7w,A8h,A8w;
	printf("\n Dimensions of A0=%dmm * %dmm",A0h,A0w);
	
	A1h=A0w;
	A1w=A0h/2;
	printf("\n Dimensions of A1=%dmm * %dmm",A1h,A1w);
	
	A2h=A1w;
	A2w=A1h/2;
	printf("\n Dimensions of A2=%dmm * %dmm",A2h,A2w);
	
	A3h=A2w;
	A3w=A2h/2;
	printf("\n Dimensions of A3=%dmm * %dmm",A3h,A3w);
	
	A4h=A3w;
	A4w=A3h/2;
	printf("\n Dimensions of A4=%dmm * %dmm",A4h,A4w);
	
	A5h=A4w;
	A5w=A4h/2;
	printf("\n Dimensions of A5=%dmm * %dmm",A5h,A5w);
	
	A6h=A5w;
	A6w=A5h/2;
	printf("\n Dimensions of A6=%dmm * %dmm",A6h,A6w);
	
	A7h=A6w;
	A7w=A6h/2;
	printf("\n Dimensions of A7=%dmm * %dmm",A7h,A7w);
	
	A8h=A7w;
	A8w=A7h/2;
	printf("\n Dimensions of A8=%dmm * %dmm",A8h,A8w);
	
}
