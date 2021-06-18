#include <stdio.h>
#include <cs50.h>

int main(void)

{
// hello world program- requests name and outputs "hello, (input name)" 

    string name = get_string("What is your name?\n");
    
    printf("hello, %s\n", name);
        
}