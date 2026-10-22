#include <stdio.h>

int main()
{
    int n, i, sum, res;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // 1. Using a FOR loop to print numbers from 1 to n
    printf("\nNumbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    // 2. Using a WHILE loop to find the sum of numbers from 1 to n
    sum = 0;
    i = 1;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    
    // 3. Using a DO-WHILE loop to find the factorial of n
    res = 1;
    i = 1;
    do
    {
        res = res * i;
        i++;
    } while(i <= n);
    
    // Printing final results
    printf("\n\nSum of numbers = %d", sum);
    printf("\nFactorial of %d = %d\n", n, res);
    
    return 0;
}
