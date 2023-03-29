#include<stdio.h>

int main(void)
{
    int start;
    do
    {
        printf("Start size: ");
        scanf("%i", &start);
    }
    while (start < 9);

    int end;
    do
    {
        printf("End size: ");
        scanf("%i", &end);
    } while (start > end);
    
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    printf("Years: %i\n", years);
     
}
