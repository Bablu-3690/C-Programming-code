#include<stdio.h>
int main()
{
    int num;
    //take the number as an input from the user
    printf("Enter the number whose multiplication table to be printed\n");
    scanf("%d", &num);
    for(int i = 0; i <10; i++)
    {
        printf("%d x %d = %d\n,num, i, i*num");
    }
    return 0;
}
