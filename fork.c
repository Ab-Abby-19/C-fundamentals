#include<stdio.h>
#include<unistd.h>
int main()
{
    int a;
    for (a=0;a<5;a++)
    {
        fork();
        printf("1");
    }
}
