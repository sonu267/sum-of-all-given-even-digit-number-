#include <stdio.h>
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int ld = 0;
    int sum = 0;
    while (n != 0)
    {
        ld = n % 10;
        if (n % 2 == 0)
        {
            sum = sum + ld;
        }

        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}