#include <stdio.h>

int main(void)
{
    int dig_1, dig_2, dig_3;
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &dig_1, &dig_2, &dig_3);

    printf("The result is %d%d%d\n", 
        dig_3, dig_2, dig_1);
}