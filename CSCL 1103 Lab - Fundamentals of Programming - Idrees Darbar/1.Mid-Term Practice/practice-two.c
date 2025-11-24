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

// #include <stdio.h>

// int main (void){

//     int a,b,c;
//     int sum;

//     printf("Enter the first angle: ");
//     scanf("%d", &a);

//     printf("Enter the second angle: ");
//     scanf("%d", &b);

//     printf("Enter the third angle: ");
//     scanf("%d", &c);

//      sum = a+b+c;

//     if (sum == 180){

//         if (a == b && b == c){
//             printf("eqi");
//         }
//         else if (a == b || b == c || a == c){
//             printf("iso");
//         }
//         else{
//             printf("scal");
//         }

//         if (a == 90 || b == 90 || c == 90){
//             printf("right");
//         }
//     }

//     else{
//         printf("inv");
//     }

// }


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


// #include <stdio.h>

// int main (void){

//     int num1, num2, result;
//     char operator;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("Enter the operator: ");
//     scanf(" %c", &operator);

//     switch(operator){

//         case '+':
//             result = num1 + num2;
//             printf("The result of addition is: %d\n",result);
//             break;
         
//         case '-':
//             result = num1 - num2;
//             printf("The result of subtraction is: %d\n",result);
//             break;

//         case '/':
//             result = num1 / num2;
//             printf("The result of Division is: %d\n",result);
//             break;

//         case '*':
//             result = num1 * num2;
//             printf("The result of multiplication is: %d\n",result);
//             break;

//         default:
//             printf("Invalid Operator\n");
            
//     }

// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main (void){

//     int user;
//     int guess;

//     srand(time(NULL));

//     guess = rand() % 100 + 1;

//     do{
//         printf("\n Enter a number to guess: ");
//         scanf("%d", &user);

//         if (user > guess){
//             printf("Too High, Try again\n");
//         }
//         else if (user < guess){
//             printf("Too Low, Try again\n");
//         }
//         else{
//             printf("You guessed it right\n");
//         }
//     }while (user != guess);
// }


// #include <stdio.h>

// int main (void){

//     int user_input;

//     int units, tens, hund, thou, tenthou;

//     int reversed;

//     printf("Enter a number: ");
//     scanf("%d", &user_input);

//     do{
//         units = (user_input % 10);
//         tens = (user_input / 10) % 10;
//         hund = (user_input / 100) % 10;
//         thou = (user_input / 1000) % 10;
//         tenthou = (user_input / 10000) % 10;

//         reversed = (units * 10000 + tens *1000 + hund * 100 + thou * 10 + tenthou );

//         printf("%d\n", reversed);
//     } while (user_input < 1);
// }

// #include <stdio.h>

// int main (void){

//     int i,fact=1,user;

//     printf("Enter a number: ");
//     scanf("%d", &user);

//     for (i = 1; i <= user; i++){
//         fact = fact * i;
//     }

//     printf("The fact is: %d\n", fact);

// }


// #include <stdio.h>

// int main (void){

//     int userinput;
//     int var1 = 0, var2 = 1;
//     int newvar;

//     printf("Enter a number: ");
//     scanf("%d", &userinput);

//     for (int i = 1; i<=userinput; i++){

//         printf("%d ", var1);

//         newvar = var1 + var2;
//         var1 = var2;
//         var2 = newvar;
//     }


// }


// #include <stdio.h>

// int main (void){

//     int row,col;
//     int inc = 1;
//     int userinp;
//     int star;

//     printf("enter the number of rows: ");
//     scanf("%d", &userinp);

//     star = 1;

//     for (row = 1; row <= (2*userinp - 1); row++ ){

//         for (col = 1; col <= star; col++){

//             printf("*");

//         }
//         printf("\n");

//         if (star == userinp){
//             inc = -1;
//         }

//         star += inc;
//     }

    
// }



// #include <stdio.h>

// int main (void){

//     int row, col;
//     int jump = 1;

//     for (row = 1; row <= 7; row++){
//         for (col = 1; col <= 7; col++){

//             if (col <= jump){
//                 printf("%d", col);
//             }
//             else{
//                 printf("*");
//             }

            

            
//         }

//         printf("\n");
//         jump++;
//     }
// }

// #include <stdio.h>

// int main (void){

//     int Leap_Yr;

//     printf("Enter a year: ");
//     scanf("%d",&Leap_Yr);

//     if ((Leap_Yr % 400 == 0) || (Leap_Yr % 4 == 0 && Leap_Yr % 100 != 0)){

//         printf("the year is leap");
//     }
//     else{
//         printf("the year is not leap");
//     }
// }