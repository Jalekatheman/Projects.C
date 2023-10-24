#include <stdio.h>

int main()
{
float value = 0;
float operand ;

    printf("insert a value to know the square root: ");
    scanf("%f", &value);

    for (operand = 1;operand *operand <(value); operand =operand +0.1)
        {
       // printf("%.1f\n",operand );
        }
        printf("The root is %.1f", operand);

    return 0;
}
