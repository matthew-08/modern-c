#include <stdio.h>

// Asks the user to input a sequence of letters (up to 20 characters).

// Reads the input using fgets.

// Prints each character on a new line, but only if the character is a letter (a-z or A-Z).

// Ignore digits, punctuation, or spaces.

int main(void) 
{
    printf("Input a sequence of letters up to 20 characters");
    char input[22];

    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
            {
                printf("%c\n", input[i]);
            }
        }
    }
}