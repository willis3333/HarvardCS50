#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


void letters(string t);
int main(void)

{
string t = get_string("text:\n");

letters(t);

}
//using string t, calculate the number of letters "l", words "w", and sentence "s" in the string.
// "i" represents each letter in the array while "l", "w" and "s" represent the cummulative totals
void letters(string t)
{
    float l = 0;
    float s = 0;
    float w = 1;
   for(int i = 0; i < strlen(t); i ++)
    {

       //letters accum everytime there is an alpha
       //words "w" accum for every space
       // words and sentences accum for all periods, exc point or quest mark
        if(isalpha(t[i]))
        {
        l++;
        }
        if(t[i] == 32)
        //&& isalpha(t[i+1]))
        {
            w++;
            
        }
        if(t[i] == '!' || t[i] == '.' || t[i] == '?' )
        {
            s++;
            
        
        
        }



    }
    printf("words: %f\n", w);
    printf("letters: %f\n", l);
    printf("sentences: %f\n", s);
    //these calculations find the index and then the if statements print the results
    float x = l/w*100;
    float y = s/w*100;
    float z = (0.0588*x)-(0.296*y)-15.8;
    printf("index: %f\n", z);
    printf("let per 100w: %f\n", x);
    printf("sen per 100w: %f\n", y);
    if(z < 1 )
    {
        printf("Before Grade 1\n");
    }
    else if(z >= 16 )
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(z));
    }
}














/*
side notes:

use algorythm "letters", w/ the spaces and periods as a divisor to determine the number of words

void words(string t)
{

int s = 0;
   for(int i = 0; i < strlen(t); i ++)
    {


        if (isalpha(t[i]))
        {
        }
        else
        {
            s++;
        }
    }
    printf("words: %i\n", s);
    int i = 0;
}
*/

/*


void letters(string s)
{
    int l = strlen(s);

    printf("letters: %i\n", l);
}

void words(string s)
{
function will treat each character in string as a char and test whether the char is actually
indeed an alpha character. If the char is an alpha character, it will be counted and divided by
the number of " " (spaces)-1 as well as the number of "." periods.


for(i=0, s=)

}

*/
