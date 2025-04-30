#include <stdio.h>
#include <ctype.h>

void print_array(int *array, int size);

int main (void)
{

    char input [100];
    printf("Enter numbers: ");

    const char *message = "Please enter in a format like: 2,4,5,...";
    int input_ints[50];

    int ints_index = 0;

    int i = 0;
    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        if (!(isdigit(input[0])))
        {
            printf("%s\n", message);
            return 1;
        }
        else
        {
            // put this in another function and then while loop on != '\0' && '\n'
            int digit_length = 0;
            int digit_array[10];
            while (isdigit(input[i]))
            {
                digit_array[digit_length++] = (input[i] - 48);
                i++;
            }
            print_array(digit_array, digit_length);
        }
    }


    print_array(input_ints, ints_index);
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}