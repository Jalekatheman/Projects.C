Vetores 

#include <stdio.h>
int main(){
    int vector[3];
    vector[0]=47;
    vector[1]=33;
    vector[2]=27;
    printf("The values of the vector are:\n");
    for (int i = 0; i < 3; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }
    printf("vector in the index %d is %d", 0, vector[0]);
    printf("\n%d", *(vector+1));
    return 0;
}