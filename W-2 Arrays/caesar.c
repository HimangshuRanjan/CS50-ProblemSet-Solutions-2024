#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Confirms there are two arguments included to run the program
    if (argc == 2)
    {
        // Iterates on the key in command line and ensures it is a positive integer
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // Returns error message if key includes anything other than digits
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int k = atoi(argv[1]);

        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");

        // Reads the plaintext and converts it it ciphertext
        for (int i = 0; i < strlen(plaintext); i++)
        {
            // Converts all the lower letter alphabets
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", ((((plaintext[i] - 'a') + k) % 26) + 'a'));
            }
            // Converts all the upper letter alphabets
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", ((((plaintext[i] - 'A') + k) % 26) + 'A'));
            }
            // Returns any character other thatn alphabets as such
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
    // Returns an error message if the code isn't executed in proper format, i.e, "./caesar key"
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}