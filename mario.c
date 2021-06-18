#include <stdio.h>
#include <cs50.h>

void wall(int, int);

int main(void)
{
// define h
           
    int h;
            
//getting the value h from user. using "do" function to set us up to later define "while" conditions in which the process will repeat/ loop
            
    do
    {
        h = get_int("height:");
    }
            
// the "while" condition discussed above stating that if h is between 0 and 8 to simply repeat the "get" function. 
//Our "for" loop allows for our repetition to create multiple layers while also changing the variable "l" to alter each layer.
//the "wall" function has been created below and identified at the top of our program in order to create a cleaner code.
            
    while(h < 1 || h > 8); 
            
    {
        for(int l = 1; l <= h; l++)
        {
            wall(l, h);
        }
    }
}






//our "wall" function utilized the "h" and "l" variables expressed above in order to create the "mario"-effect wall.
//it contains multiple variables which represent different parts of each layer, and these variable change with each new layer ("l")
//the function ends with a new line and repeats itself since we used the "while" loop above. the while loop could have been placed within this function but it has a higher number of uses expressed in this manner and is more versatile and alterable
        
void wall(int l, int h)
{
    for(int s = 0; s < h-l; s++)
            
    {
        printf(" ");
    }

    for(int i = 0; i < l; i++)
            
    {
        printf("#");
    }

    printf("  ");

    for(int r = 0; r < l; r++)
            
    {
        printf("#");
    }

    printf("\n");
            

}








//brainstorming/ rules:

//once height reaches 1 it must stop. at less than one or greater than 8 it must indicate that the number is not valid

// create separate "mario" function and void at the top for cleaner code

// functions i, r, s representing left side, right side, and space respectively

// each line should end with a new line and with height decreasing by 1



