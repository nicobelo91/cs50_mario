#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    int size;
    do
    {
        size = get_int("Size: ");
    }

    while (size < 1 || size > 8); //pyramid has to have a size between 1 and 8
    
//first pyramid
    
    for (int row = 0; row < size; row++)
    {

//spaces before the pyramid
        
        for (int space = 0; space < size - row - 1 ; space++)
        {
            printf(" ");
        }
        
//height of the pyramid

        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
      
//space in the middle
    
        for (int space1 = 0; space1 < 2; space1++)
        {
            printf(" ");
        }
        
//second pyramid
    
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}