#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASCII 32

int main()
{
    char word[100];

    printf("This program turn a word from uppercase to lowercase! \nCool, isn't it? ");

    printf("Come on kid, write a word: ");
    scanf("%s", word);

    for(int i = 0; i <= strlen(word); i ++)
    {

        if((word[i] >= 65) && (word[i] <= 90))
        {
            word[i] += ASCII;
            printf("%c", word[i]);
        }

        else
            printf("%c", word[i]);

    }

    printf("\nNow your word is lowercase\n\n");
    printf("Very good!");
    return 0;
}
