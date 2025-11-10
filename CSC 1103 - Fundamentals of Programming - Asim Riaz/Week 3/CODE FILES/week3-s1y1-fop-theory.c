#include<stdio.h>

int main(){
    int grade=69;

    printf("Enter grade : ");
    scanf("%d", &grade);

    if(grade >= 60){
        puts("Passed");
    }else{
        puts("Failed");
    }

    //  puts(grade >= 60 ? "Passed" : "Failed"); 
    //  we can also write this line to match the if-statement.
}