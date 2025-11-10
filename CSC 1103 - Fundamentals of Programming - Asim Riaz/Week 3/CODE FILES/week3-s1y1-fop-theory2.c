#include <stdio.h>

int main()
{
    int grade = 0;

    printf("Enter grade : ");  
    scanf("%d", &grade);

    if (grade >= 90)  // nested if-else
    {
        puts("A");
    }
    else
    {
        if (grade >= 80)
        {
            puts("B");
        }
        else
        {
            if (grade >= 70)
            {
                puts("C");
            }
            else
            {
                if (grade >= 60)
                {
                    puts("D");
                }
                else
                {
                    puts("F");
                }
            }
        }
    }


}