#include <stdio.h>
int main()
{
    int vector[3];
    printf("Give a value: ");
    scanf("%d",&vector[0]);
    printf("Give a value: ");
    scanf("%d",&vector[1]);
    printf("Give a value: ");
    scanf("%d",&vector[2]);
    printf("0: %d" ", 1: %d" ", 2: %d", vector[0],vector[1],vector[2]);
}


//same with 'for' cicles

#include <stdio.h>
int main()
{
    int vector[3];
 
    for (int i = 0; i < 3; i++) {
        printf("Give vector's a value [%d]: ", i);
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("The vector's [%d] value is: %d\n", i, vector[i]);
    }
   
}