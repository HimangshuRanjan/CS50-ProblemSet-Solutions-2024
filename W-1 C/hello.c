#include <cs50.h>   // CS50 Library for get_string
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");   // Asks user for their name.
    printf("Hello, %s\n", name);   // Prints hello, user's name
}