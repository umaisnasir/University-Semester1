// #include <stdio.h>

// int main (void){

//     int useri1,useri2;
    

//     printf("Enter a number for a table: ");
//     scanf("%d", &useri1);

//     printf("Enter a number for a range: ");
//     scanf("%d", &useri2);

//     for(int i = 1; i<=useri1; i++){  // table
        
//         for(int j = 1 ; j<=useri2; j++){  // range of table

//             printf("%2d x %2d = %3d\n", i,j,j*i);
//         }
//         printf("\n");
//     }

// }


// #include <stdio.h>

// int main (void){

//     char MarStatus, Gender;
//     int Age;

//     printf("Enter your marital status(y/n): ");
//     scanf("%c", &MarStatus);

//     printf("Enter your gender(m/f): ");
//     scanf(" %c", &Gender);

//     printf("Enter your age: ");
//     scanf("%d", &Age);


//     if ((MarStatus == 'Y') || (MarStatus == 'y')) {
//         printf("You are insured!");
//     }
//     else if ((MarStatus == 'N') || (MarStatus == 'n')){

//         if (((Gender == 'M') || (Gender == 'm')) && (Age > 30)){
//             printf("You are insured!");
//         }
//         else if (((Gender == 'F') || (Gender == 'f')) && (Age > 25)){
//             printf("You are insured!");
//         }
//         else{
//             printf("You are not insured!");
//         }
//     }
//     else{
//         printf("Enter correct details");
//     }

// }


// #include <stdio.h>

// int main (void){

//     float weight;
//     float height;
//     float BMI;

//     printf("Enter the height in m: ");
//     scanf("%f", &height);

//     printf("Enter the weight in kg: ");
//     scanf("%f", &weight);

//     BMI = weight / (height * height);

//     printf("your BMI is: %f\n",BMI);

//     if (BMI < 18.5){
//         printf("Underweight");
//     }
//     else if (BMI >= 18.5 && BMI < 25){
//         printf("Normal");
//     }
//     else if (BMI >=25 && BMI < 30){
//         printf("OverWeight");
//     }
//     else{
//         printf("Obese");
//     }

// }

#include <stdio.h>

int main (void){

    int a,b,c;
    int sum;

    printf("Enter the first angle: ");
    scanf("%d", &a);

    printf("Enter the second angle: ");
    scanf("%d", &b);

    printf("Enter the third angle: ");
    scanf("%d", &c);

     sum = a+b+c;

    if (sum == 180){

        if (a == b && b == c){
            printf("eqi");
        }
        else if (a == b || b == c || a == c){
            printf("iso");
        }
        else{
            printf("scal");
        }

        if (a == 90 || b == 90 || c == 90){
            printf("right");
        }
    }

    else{
        printf("inv");
    }

}


// #include <stdio.h>

// int main (void){

//     float atten, score;

//     printf("enter the score:");
//     scanf("%f", &score);

//     printf("enter the attendence: ");
//     scanf("%f", &atten);

//     if (score >= 90){
//         if(atten >= 90){
//             printf("A\n");
//         }
//         else{
//             printf("F\n");
//         } 
//     }

//     else if (score >= 80){
//         if (atten >= 80){
//             printf("B\n");
//         }
//         else{
//             printf("F\n");
//         }
//     }


//     else if (score >= 70){
//         if (atten >= 70){
//             printf("C\n");
//         }
//         else{
//             printf("F\n");
//         }
//     }

//     else if (score >= 60){
//         if (atten >= 60){
//             printf("D\n");
//         }
//         else{
//             printf("F\n");
//         }
//     }

//     else{
//         printf("F\n");
//     }
// }