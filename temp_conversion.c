include<stdio.h>
int main()
{
    float F,C;
    printf("Enter temperature in Fahrenhiet=");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("temperature in Celsius=%f",C);
    return 0;
}
