#include<stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d", &n);
    //sum = 1+2+3+4.......+n

    //Runs in linear time
    //for (int i = 1; i <= n; i++)
    {
    //    sum +=i;
    }
    //Runs in constant time
    sum = (n*n + n)/2;

    printf("Sum of first %d natural number is: %d\n", n, sum);

    return 0;
}