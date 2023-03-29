#include<stdio.h>
#include<string.h>

int main()
{
    char *word;
    printf("Word: \n");
    scanf("%s", word);
    int length = strlen(word);
    for (int i = 0; i < length-1; i++)
    {
        if (word[i+1] > word[i])
        {
            printf("Yes\n");
            return 0;
        }  
    }
    printf("No\n");
    return 0;
}
