// #include<stdio.h>

// int main(){
//     int count, ast, spc=1;

//     for(count=1; count <= 10; count++){
//         for(ast = 1; ast <= 10; ast++){
//             printf(spc > ast ? "-":"*");
//         }
//         spc++;
//         printf("\n");
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main(){
//     int count, ast;

//     for(count=1; count <= 10; count++){
//         printf("%d ", count);
//         for(ast = 1; ast <= count; ast++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// int main(){
//     int count, ast;

//     for(count=10; count >= 1; count--){
//         printf("%d ", count);
//         for(ast = 1; ast <= count; ast++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main(){
//     int count, ast, spc=1;

//     for(count=1; count <= 10; count++){
//         for(ast = 1; ast <= 10; ast++){
//             printf(spc > ast ? "-":"*");
//         }
//         spc++;
//         printf("\n");
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main(){
//     int count, n=1, inc=2;

//     for(count=1; count <= 9; count++){
//         printf("%d\n", n);
        
//         n = n + inc;
//         if(n == 9){
//             inc=-2; 
//         }
        
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main(){
//     int count, a, n=5, inc=1;

//     for(count=1; count <= 9; count++){
//         //printf("%d\n", n);
//         for(a=1; a<=n; a++){
//             printf("*");
//         }
//         n+=inc;
//         if(n == 9){
//             inc=-1;
//         }
//         puts("");
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main()
// {
//     int count, n = 5, inc = 1;

//     int spc = n-1; 

//     for(count=1; count<=9; count++){
//         //printf("%d\n", n);
//         for(int a=1; a<=n; a++){
//             printf(spc >= a ? "-":"*");
//         }
//         for(int a = 1; a < spc; a++) printf("-");

//         printf("\n");
//         if(n == 9){
//             inc=-1;
//         }
//         n+=inc;
//         spc-=inc;
//     }
// }

// ------------------------------------------------------------------------------------------------------------------------------------

// #include<stdio.h>

// int main()
// {
//     int count, n = 5, inc = 1;
//     int spc = n - 1; 

//     for(count = 1; count <= 9; count++) {
//         for(int a = 1; a <= n; a++) {
//             printf(spc >= a ? "-" : "*");
//         }
        
//         //  added line to print the trailing '-'
//         for(int a = 1; a <= spc; a++) printf("-");
        
//         printf("\n");

//         if(n == 9) {
//             inc = -1;
//         }
//         n += inc;
//         spc -= inc;
//     }
// }
