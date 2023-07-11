include<stdio.h>
int main()
{
	int p,ar,l,b;
	float area,cir,r;
	printf("\n Enter length and breadth of Rectangle=");
	scanf("%d%d",&l,&b);
	p=(l+b)*2;
	ar=l*b;
	printf("Perimeter of rectangle=%d \n Area of Rectnagle=%d",p,ar);
	printf("\n Enter Radius=");
	scanf("%f",&r);
	cir=2*3.14*r;
	area=3.14*r*r;
	printf("\n Circumference of circle=%f \n Area of circle=%f",cir,area);
}
