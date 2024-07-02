#include <stdio.h>

int ncd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nck(int a, int b)
{
    return (a / ncd(a, b)) * b;
}

int nckArray(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = nck(result, arr[i]);
    }
    return result;
}

int main()
{
    int p;
    printf("Enter number of natural numbers: ");
    scanf("%d", &p);

    int numbers[p];
    printf("Enter %d natural numbers: ", p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int result = nckArray(numbers, p);
    printf("NCK: %d\n", result);

    return 0;
}
