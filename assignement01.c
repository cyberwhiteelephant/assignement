#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPasswordValid(char *password)
{
    int length = strlen(password);
    int hasUpperCase = 0;
    int hasLowerCase = 0;
    int hasDigit = 0;


    if (length < 8 || length > 20)
        {
        return 0;
        }


    for (int i = 0; i < length; i++)
        {
        if (isupper(password[i]))
          {
            hasUpperCase = 1;
          }
            else if (islower(password[i]))
          {
            hasLowerCase = 1;
          }
            else if (isdigit(password[i]))
          {
            hasDigit = 1;
          }
        }


    if (hasUpperCase && hasLowerCase && hasDigit)
        {
           return 1;
        }
          else
            {
              return 0;
            }
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
                  printf("Password is invalid.\n");
                }

    return 0;
}




Output:-
PS D:\College Program\Assignement> gcc assignement01.c
PS D:\College Program\Assignement> .\a.exe
Enter the password: aneesh
Password is invalid.

    
