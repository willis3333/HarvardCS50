#include <stdio.h>
#include <cs50.h>

void cardsum(long);
int main(void)

{
long n;

n = get_long("card number:");

cardsum(n);
    
}

void cardsum(long n)
{
//sum of even decimal ranges multiplied by 2
//defining variables
long i = 1;
int t = 0;

//create loop for i within the restraint of n so that variables like t can be incremented
while (i <= n * 100)
//incrementing i so that it picks out the integers to be manipulated
for(i = 100; i <= n * 100 ; i = i * 100)
{
//creating integer s representing the sum of the digits of every other integer multiplied by 2

int s = ((((n % i) / (i / 10)) * 2) / 10) + ((((n % i) / (i / 10)) * 2) % 10);
//incrementing t by the output s to create a total or sum of the answers from the s formula
t = t + s;

//below function performs the same operation but for the numbers which were not calculated in s. these numbers are not multiplied by 2, and will be added to the previous sum of t 

}
i=1;
while (i <= n * 10)
for(i = 10; i <= n * 10 ; i = i * 100)
{
int q = (n % i)/ (i/10);

t = t + q;
}

//the below formulas initially take the information from the cardsum formula to check if the card number is valid and then they move into formulas to determine the type of card

if(t % 10 == 0)
{
    if(n / 100000000000000 >= 51 && n / 100000000000000 <= 55)
    {
        printf("MASTERCARD\n");   
    }
    else if(n / 10000000000000 == 34 || n / 10000000000000 == 37)
    {
        printf("AMEX\n");
    }
    else if(n / 1000000000000000 == 4 || n / 1000000000000 == 4) 
    {
        printf("VISA\n");
    }
    else
    {
    printf("INVALID\n");
    }
}

//in the case that it does not match any of the above conditions, it will be considered invalid for the sake of this program, and will output invalid 

else
{
    printf("INVALID\n");
}

    
}


