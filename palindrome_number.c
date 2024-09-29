#include<stdio.h>
int main()
{
    int n, r, sum=0,temp;
    printf("Enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r=n%10;
        sum = (sum*10)+r;
        n = n/10;
    }
    if(temp == sum)
    printf("palindrome number");
    else
    printf("not palindrome");
    return 0;
}

// enter teh number = 151
// palindrome number 

// enter the number = 5612
// not palindrome number