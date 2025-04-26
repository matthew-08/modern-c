#include <stdio.h>


int main(void)
{
    printf("Enter 13 digit EAN: \n");
    char input_code[15];
    
    if (fgets(input_code, sizeof(input_code), stdin) != NULL)
    {
        for (int i = 0; input_code[i] != '\n'; i++)
        {
            if (!(input_code[i] >= '0' && input_code[i] <= '9'))
            {
                printf("test%ctest", input_code[i]);
                printf("ERROR");
            }
        }
    }

    int first_sum = 0;
    for (int i = 1; i < 13; i += 2)
    {
        int num = input_code[i] - '0';
        first_sum += num;
    }
    int second_sum = 0;
    for (int i = 0; i < 12; i += 2)
    {
        second_sum += (input_code[i] - '0');
    }
    int third_result = ((first_sum * 3) + second_sum) - 1;
    int rem = third_result % 10;
    int final = 9 - rem;
    printf("%d", final);


}