#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void passec(char password[100], int len);
void passec(char password[100], int len)
{

    int i, up = 0, lw = 0, sy = 0, di = 0;
    len = strlen(password);
    for (i = 0; i < len; i++)
    {
        if (password[i] >= 48 && password[i] <= 58)
        {
            di = 0;
            break;
        }
        else
        {
            di = 1;
        }
    }
    for (i = 0; i < len; i++)
    {

        if (password[i] <= 90 && password[i] >= 65)
        {
            up = 0;
            break;
        }
        else
        {
            up = 1;
        }
    }
    for (i = 0; i < len; i++)
    {

        if (password[i] <= 122 && password[i] >= 97)
        {
            lw = 0;
            break;
        }
        else
        {
            lw = 1;
        }
    }
    for (i = 0; i < len; i++)
    {
        if (password[i] <= 47 && password[i] >= 33)
        {
            sy = 0;
            break;
        }
        else
        {
            sy = 1;
        }
    }

    if (sy == 1 || di == 1 || lw == 1 || up == 1)
    {
        printf("the password entered doesn't match the criteria for a strong password\n");
    }
    else
    {
        printf("the password matches the criteria for a strong password\n");
    }
}
void main()
{
    printf("your password must have the following criteria\n\n");
    printf("-------------------------------------------------------\n");
    printf("1. your password's length must be between 8 and 16\n\n");
    printf("2. your password must have one uppercase letter\n");
    printf("3. your password must have one lowercase letter\n");
    printf("4. your password must have one digit\n");
    printf("5. your passsword must have one special characters\n");
    printf("like->@,#,!,$,&,*\n");
    printf("-------------------------------------------------------\n\n");
    char pass[100];
    printf("enter the password:");
    scanf("%s", pass);
    int len;
    len = strlen(pass);
    if (len <8 || len > 16)
    {
        printf("the length of the password entered is not between 8 and 16\nplease enter a password which matches the criteria for a strong password\n");
    }
    else
    {
        passec(pass, len);
    }
}