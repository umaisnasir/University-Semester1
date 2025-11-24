#include<stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index=0;
    char cha;
    int var;

    while (str[index] != '\0')
    {
        
        if (index == 0){    // For making the first character uppercase.
            cha = str[index]-32;
            str[index] = cha;


        }
        
        
        if(str[index] == ' '){  // for making the letter uppercase which comes after empty space.
            
            cha = str[index + 1]-32;

            str[index+1] = cha;

        }

        printf("%c", str[index++]);
        
    }
}
