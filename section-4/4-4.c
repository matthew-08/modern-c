#include <stdio.h>


int main(void)
{
    int input;
    printf("Enter a number between 0 and 32767: \n");
    scanf("%d", &input);
    printf("In octal, your number is: \n");

    int octal[5];


    for (int i = 0; i < 5; i++)
    {
        octal[i] = (input % 8);
        input = input / 8;
    }

    for (int i = 4; i >= 0; i--) {
        printf("%d\n", octal[i]);
    }

}