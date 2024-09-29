#include<stdio.h>

int reverse(int num)
{
    int rev = 0, rem;
    while(num!=0)
    {
        rem = num%10; //last digit of sum
        rev = rev*10+rem; //Generate a number from rev with rem as last digit
        num = num/10;
    }
    return rev;
}
int main()
{
    int num = 9142378340;
    int rev = reverse(num);
    printf("The reverse number is %d", rev);

    return 0;
}