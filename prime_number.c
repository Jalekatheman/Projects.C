#include <stdio.h>
void main()

{
    int value = 20;
    int counter ;
    
    printf("Insert the number here: ");
    scanf("%d",&value );
    
    for (counter =2;counter < value ;counter ++)
    {
    if ((value % counter )==0)
            {
                printf("it isn't prime\n");
                return;
            }
    }       
    printf("it's a prime\n");
    return;
}