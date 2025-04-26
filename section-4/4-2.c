#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a two or three digit number: ");
    scanf("%d", &input);

    printf("The result is %d%d%d\n", 
        (input % 10), ((input % 100) / 10), (input / 100));
}