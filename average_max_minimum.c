#include <stdio.h>

int main() {
    float value[5], average = 0, max = 0, min = 0;
    int sum = 0;

    printf("Insert 5 value:\n");

    for (int i = 0; i < 5; i++) {
        printf("Insert a value %d: ", i + 1);
        scanf("%f", &value[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Element with index %d value: %.2f \n", i, value[i]);
        
        sum = sum + value[i]; //or sum+=value
        average = sum/5;
        max = value[0];
        min = value[0];
        
    for (int i = 0; i < 5; i++) {  
        if (value[i] < min){
        min = value[i];
        }
        if (value[i] > max){
        max = value[i];
            }
        } 
    }
        printf("The Average is: %.2f\n", average);
        printf("The Maximum is: %.2f\n", max);
        printf("The Minimum s: %.2f\n", min);
        return 0;
}
