#include <stdio.h>
#include <ctype.h>

void print_array(int *array, int size);
int to_the_power_of(int input, int power);
int convert_to_int (int digit_array[], int digit_length);
int extract_int(char* input, int* iterator);
int sum (int input[], int input_size);
int avg (int input[], int input_size);


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
            while (input[i] != '\0' && input[i] != '\n')
            {
                int extracted_int = extract_int(input, &i);
                input_ints[ints_index++] = extracted_int;
                if (input[i] == ',')
                {
                    i++;
                }
                else if (input[i] != '\n')
                {
                    printf("%s\n", message);
                    return 1;                
                }
            }

        }
        printf("Sum: %d\n", sum(input_ints, ints_index));
        printf("Avg: %d\n", avg(input_ints, ints_index));
    }




}

int sum (int input[], int input_size)
{
    int result = 0;
    for (int i = 0; i < input_size; i++)
    {
        result += input[i];
    }
    return result;
}

int avg (int input[], int input_size)
{
    return sum(input, input_size) / input_size;
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
    int power = digit_length - 1;
    for (int i = 0; i < digit_length; i++)
    {
        result += (digit_array[i] * to_the_power_of(10, power--));
    }

    return result;
}

int extract_int(char* input, int* iterator)
{
    int digit_length = 0;
    int digit_array[10];
    while (isdigit(input[*iterator]))
    {
        digit_array[digit_length++] = (input[*iterator] - 48);
        (*iterator)++;
    }
    return convert_to_int(digit_array, digit_length);
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}