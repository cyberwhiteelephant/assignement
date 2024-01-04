// Write the C program for check the given string is in password validation.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPasswordValid(char *password) 
{
    int length = strlen(password);

    if (length < 8) 
    {
        return 0;
    }

    int hasUppercase = 0;
    for (int i = 0; i < length; i++) 
    {
        if (isupper(password[i])) 
        {
            hasUppercase = 1;
            break;
        }
    }

    if (!hasUppercase) 
    {
        return 0;
    }

    int hasLowercase = 0;
    for (int i = 0; i < length; i++) 
    {
        if (islower(password[i])) 
        {
            hasLowercase = 1;
            break;
        }
    }

    if (!hasLowercase) 
    {
        return 0;
    }

    int hasDigit = 0;
    for (int i = 0; i < length; i++) 
    {
        if (isdigit(password[i])) 
        {
            hasDigit = 1;
            break;
        }
    }

    if (!hasDigit) 
    {
        return 0;
    }

    return 1;
}

int main() 
{
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isPasswordValid(password)) 
    {
        printf("Password is valid.\n");
    } 
    else 
    {
        printf("Password is not valid.\n");
    }

    return 0;
}




Output:-
PS D:\College Program\Assignement> gcc assignement03.c
PS D:\College Program\Assignement> .\a.exe
Enter the password: 8909878
Password is not valid.
