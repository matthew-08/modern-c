#include <stdio.h>
#include <ctype.h>


int main (void)
{

    char input [100];
    printf("Enter numbers: ");

    const char *message = "Please enter in a format like: 2,4,5,...";
    int input_ints[50];

    int ints_index = 0;

    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        for (int i = 0; input[i] != '\n'; i++)
        {
            if (i % 2 == 0)
            {
                if (!isdigit(input[i]))
                {
                    printf("Error: %s\n", message);
                    break;
                }
                else 
                {
                    input_ints[ints_index++] = (input[i] - 48);
                }
            }
            else
            {
                if (input[i] != ',')
                {
                    printf("Error: %s\n", message);
                    break;
                }
            }
        }
    }


    printf("%d", input_ints[0]);
}