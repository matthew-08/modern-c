#include <stdio.h>
#include <ctype.h>

void print_array(int *array, int size);
int to_the_power_of(int input, int power);

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

            // convert to base 10 int, put into array.

            if (input[i] == '\0' || input[i] == '\n')
            {
                // done;
            }
        }
    }


    print_array(input_ints, ints_index);
    printf("\nTest: %d", to_the_power_of(10, 3));
}

int to_the_power_of(int input, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= input;
    }
    return result;
}

int convert_to_int (int digit_array[], int digit_length) 
{
    int result = 0;
    for (int i = 0; i < digit_length; i++)
    {
        result += digit_array[i];
    }
}

void extract_int(char* input, int iterator)
{
    int digit_length = 0;
    int digit_array[10];
    while (isdigit(input[iterator]))
    {
        digit_array[digit_length++] = (input[iterator] - 48);
        iterator++;
    }

}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}