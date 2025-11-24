#include<stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index=0;
    char cha;
    int var;

    
    
    while (str[index] != '\0')  // while last array index reached, run the code...
    {
        
        if(str[index] != ' '){  // if a certain array element = empty space
            
            cha = str[index]-32;  // convert to uppercase ascii

            str[index] = cha;  // store the uppercase letters back in all array elements.

        }

        printf("%c", str[index++]);
        
    }
    

}