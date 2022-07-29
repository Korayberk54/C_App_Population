#include <cs50.h>
#include <stdio.h>

/* Increasing the number of llamas on Earth? THATS MORE LIKE MY EVIL PLAN! I LIKE IT.*/

int startSize = 0;
int endSize;
int years = 0;

int get_startingSize();
int get_endingSize();
int get_numberOfYears();

int main(void)
{

    get_startingSize();
    get_endingSize();
    get_numberOfYears();
    printf("Years: %i \n", years);
// That last part was a hell . Thank GOD I handled it .
}


int get_startingSize()
{

    do
    {
        startSize = get_int("Start Size: ");
    }
    while (startSize < 9);
    return startSize;
}

int get_endingSize()
{

    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);
    return endSize;
}

int get_numberOfYears()
{

    int currentHerd = startSize;


    while (currentHerd < endSize)
    {
        currentHerd = currentHerd + ((currentHerd / 3) - (currentHerd / 4));
        years++;
    }
    return years;
}