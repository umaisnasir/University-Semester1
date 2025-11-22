#include<stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index=0;
    char cha;
    int var;

    
    
    while (str[index] != '\0')
    {
        
      

        
        if(str[index] != ' '){
            
            cha = str[index]-32;

            str[index] = cha;

        }

        printf("%c", str[index++]);
        
        

    }
    

}