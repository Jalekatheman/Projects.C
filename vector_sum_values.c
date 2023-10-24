#include <stdio.h>
int main()
{
    int vector[3];
    int sum = 0;
 
    for (int i = 0; i < 3; i++) {
        printf("Give vector a value[%d]: ", i);
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("the vector's[%d] value is: %d\n", i, vector[i]);
        sum += vector[i];
    }
    printf("The sum is: %d\n", sum);
    return 0;
}