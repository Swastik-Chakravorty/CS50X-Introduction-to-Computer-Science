#include<stdio.h>

int main()
{
    int arr[10];
    arr[0] = 1;
    printf("%d\n", arr[0]);
    for (int i = 0; i < 9; i++)
    {
        arr[i + 1] = arr[i] * 2;
        printf("%d\n", arr[i + 1]);
    }
    return 0;
}
