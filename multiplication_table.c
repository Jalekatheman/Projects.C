#include <stdio.h>

int main()
{
int counter;
int operand;

   for(operand=1;operand<10;operand++)
{
        printf("\nMultiplication table of %d\n",operand );
        
        for(counter=1;counter<10;counter++)
    {
    printf("%dx%d=%d\n", operand , counter, operand * counter);
    }
} 

    return 0;

}
