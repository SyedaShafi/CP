#include <stdio.h>
int main()
{
    //     long long int n, temp, sum = 0, rem;
    //     printf("Enter the number: ");
    //     scanf("%lld", &n);
    //     temp = n;
    //     while (temp != 0)
    //     {
    //         rem = temp % 10;
    //         sum = sum * 10 + rem;
    //         temp = temp / 10;
    //     }

    //     if (sum == n)
    //         printf("%lld is a palindrome number\n");
    //     else
    //         printf("%lld is not a palindrome number\n");

    int a = 5, b = 10, c;
    int *p = &a, *q = &b;
    c = p - q;
    printf("%d", c);
}