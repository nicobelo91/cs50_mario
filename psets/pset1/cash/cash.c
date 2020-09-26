#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float money;
    do
    {
        money = get_float("Change owed: ");
    }

    while (money <= 0);
    
    int cents = round(money * 100);
    int coins = 0;
    
    while (cents >= 25)
    {
        cents = cents - 25;
        coins = coins + 1;
    }
     
    while (cents >= 10)
    {
        cents = cents - 10;
        coins = coins + 1;
    }
     
    while (cents >= 5)
    {
        cents = cents - 5;
        coins = coins + 1;
    }
     
    while (cents >= 1)
    {
        cents = cents - 1;
        coins = coins + 1;
    }
    printf("%i\n", coins);
}