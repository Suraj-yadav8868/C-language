#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    gets(str);

    /* Count frequency */
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    printf("\nFrequency of each letter:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0 && i != ' ')
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}
