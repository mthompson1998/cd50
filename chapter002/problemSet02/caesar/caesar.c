#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Make program run with one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // make sure argv[1] is a digit
    for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key");
                return 1;
            }
        }

            int k = atoi(argv[1]);

            string plaintext = get_string("plaintext: \n");
            printf("ciphertext: \n");

            for (int j = 0; j < strlen(plaintext); j++)
            {
                if (isupper(plaintext[j]))
                {
                    printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
                }
                else if (islower(plaintext[j]))
                {
                    printf("%c", (plaintext[j] - 65 + k) % 26 + 97);
                }
                else
                {
                    printf("%c", plaintext[j]);
                }
            }
            printf("\n");
}

