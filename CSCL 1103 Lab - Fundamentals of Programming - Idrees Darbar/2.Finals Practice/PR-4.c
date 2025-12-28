// #include <stdio.h>

// void array_with_pointers(int array, int size){

//     int* ptr = array;

//     for (int i = 0; i < size; i++){
//         printf("Index %d -> Value: %d, Address: %p\n", i, *ptr, ptr);
//         ptr++;
//     }

// }

// int main (void){

//     int Array[10];

//     for (int i = 0; i < 10; i++){
        
//         printf("Enter a number to store inside the array: ");
//         scanf("%d", &Array[i]);

//     }

//     array_with_pointers(Array, 10);


// }


// #include <stdio.h>

// void func(int *sizePtr){
    
//     int size = *sizePtr;
    
//     int Array[size];

//     int* ptr = Array;

//     for (int i = 0; i < size; i++){
//         *(ptr + i) = (i * 1)*5;
//     }

//     for (int i = 0; i < size; i++) {
//         printf("Index: %d -> Value: %d, Address: %p\n", i, *(ptr + i), (ptr + i));
//     }


// }

// int main (void){

//     int ArraySize;

   

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     func(&ArraySize);

// }


//--------------------------------------------------------------------------------


// #include <stdio.h>

// void insertelement(int Array[], int *size, int pos, int value){

//     // loop will run until position

//     //Starting the loop from *size and moving backwards shifts 
//     //elements to the right without overwriting existing data, 
//     //creating space at the desired position for the new element.
    
//     for (int i = *size; i > pos; i--){
//         Array[i] = Array[i - 1];
//     }

//     Array[pos] = value;

//     (*size)++;
// }

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray + 1];

//     for (int i = 0; i < SizeArray; i++) {
//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &Array[i]);
//     }

//     int new_val, pos;

//     printf("Enter the new value to insert: ");
//     scanf("%d", &new_val);

//     printf("Enter the position to insert: ");
//     scanf("%d", &pos);

//     insertelement(Array, &SizeArray, pos, new_val);

//     printf("\nArray contents after insertion: ");
//     for (int i = 0; i < SizeArray; i++) {
//         printf("%d ", Array[i]);
//     }

//     printf("\n");

//     return 0;
// }


// ----------------------------------------------------------------------


/*#include <stdio.h>

void reverseArray(int Array[], int SizeArray){

    for (int i = 0; i < SizeArray/2; i++){

        int temp = Array[i];
        Array[i] = Array[SizeArray - 1 - i];
        Array[SizeArray - 1 - i] = temp;
    }
}

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];

    int num;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;
    
    }

    reverseArray(Array, SizeArray);

    printf("Contents of the Reversed array: ");
    for (int i = 0; i < SizeArray; i++){
        printf("%d ", Array[i]);
    }
}*/


// ----------------------------------------------------------------------


// #include <stdio.h>

// int largestFunc(int Array[], int SizeArray){

//     int num, largest = 0;
    
//     for (int i = 0; i < SizeArray; i++){

//         printf("Enter a number to store inside the array: ");
//         scanf("%d", &num);

//         Array[i] = num;

//         if (Array[i] > largest){
//             largest = Array[i];
//         }
//     }

//     return largest;


// }

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];


//    int largest = largestFunc(Array, SizeArray);

//     printf("The largest of the numbers in the array is: %d", largest);
// }


// ----------------------------------------------------------------------


// #include <stdio.h>

// void largestFunc(int Array[], int SizeArray, int* largest){

//     *largest = Array[0];

//     for (int i = 1; i < SizeArray; i++){
//         if (Array[i] > *largest){
//             *largest = Array[i];
//         }
//     }
// }

// int main (void){
//     int SizeArray;

//     printf("Enter the size of the array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

    
//     for (int i = 0; i < SizeArray; i++) {
//         printf("Enter a number to store inside the array: ");
//         scanf("%d", &Array[i]);
//     }

//     int largest;

//     largestFunc(Array, SizeArray, &largest);

//     printf("The largest of the numbers in the array is: %d\n", largest);

//     return 0;
// }


// ----------------------------------------------------------------------


/* #include <stdio.h>

void printArray(int* Ptr){
    int var = *Ptr;

    int Array[var];

    int* Ptr2 = Array;

    for (int i = 0; i < var; i++){
        *(Ptr + i) = (i + 1) * 5; 
    }

    for (int i = 0; i < var; i++) {
        printf("Index: %d -> Value: %d, Address: %p\n", i, *(Ptr + i), (Ptr + i));
    }

}



int main (void){
    
    int ArraySize;

    printf("Enter the size of the array: ");
    scanf("%d", &ArraySize);

    printArray(&ArraySize);

} */



/*#include <stdio.h>

void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int var1,var2;

    int* ptr1 = &var1;
    int* ptr2 = &var2;

    printf("Enter the first number: ");
    scanf("%d", ptr1);

    printf("Enter the second number: ");
    scanf("%d", ptr2);

    swap(ptr1, ptr2);

    printf("Variable 1 now has the value: %d\n", *ptr1);
    printf("Variable 2 now has the value: %d\n", *ptr2);



}*/


/*#include <stdio.h>

void function(const char* array_ptr, int* characters, int* words){
    *characters = 0;
    *words = 1;

    for (int i = 0; array_ptr[i] != '\0'; i++){
        (*characters)++;

        if (array_ptr[i] == ' '){
            (*words)++;
        }
    }

}


int main (void){

    char Array[] = "A quick brown fox";
    int characters, words;

    function(Array, &characters, &words);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);

    return 0;

}*/

//---------------------------------------------------------------------------------------------------------

/*#include <stdio.h>

void function(const char* array_ptr, int* characters, int* words){
    *characters = 0;
    *words = 1;

    for (int i = 0; array_ptr[i] != '\0'; i++){
        (*characters)++;

        if (array_ptr[i] == ' '){
            (*words)++;
        }
    }

}

int main (void){

    char Array[100];

    printf("Enter the string: ");
    fgets(Array, 100, stdin);

    int characters, words;

    function(Array, &characters, &words);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);

    return 0;

}*/

//---------------------------------------------------------------------------------------------------------

/*#include <stdio.h>
#include <string.h>

int main (void){

    char char_array1[100] = "Hello";
    char char_array2[100];

    int i;

    for (i = 0; char_array1[i] != '\0'; i++){
        char_array2[i] = char_array1[i];
    }

    char_array2[i] = '\0';

    printf("%s", char_array2);


}*/

//---------------------------------------------------------------------------------------------------------

/*#include <stdio.h>
#include <string.h>

void function(char* dest, const char* src);      SAME
void function(char dest[], const char src[]);      SAME


void function(char* dest, const char* src){

    strcat(dest, src);

}

int main (void){

    char char_array[100];

    printf("Enter the first string: ");
    fgets(char_array, sizeof(char_array), stdin);
    char_array[strcspn(char_array, "\n")] = '\0';

    char char_array2[100];

    printf("Enter the second string: ");
    fgets(char_array2, sizeof(char_array2), stdin);
    char_array2[strcspn(char_array2, "\n")] = '\0';

    function(char_array, char_array2);

    printf("Concatenated string: %s\n", char_array);
}*/

//---------------------------------------------------------------------------------------------------------

/*#include <stdio.h>
#include <string.h>

void comparefunc(const char* userinpname, const char* userinppass, const char* username, const char* password){

    if (strcmp(userinpname, username) == 0 && strcmp(userinppass, password) == 0){
        printf("Both username and pass is simialr\n");
    }
    else if (strcmp(userinpname, username) == 0){
        printf("username is similar\n");
    }
    else if (strcmp(userinppass, password) == 0){
        printf("password is similar\n");
    }
    else{
        printf("Retry!\n");
    }
}

int main (void){

    char username[100] = "umaisnasir";
    char password[100] = "abc.123";

    char userinpname[100];
    char userinppass[100];

    printf("Enter the username: ");
    fgets(userinpname, sizeof(userinpname), stdin);
    userinpname[strcspn(userinpname, "\n")] = '\0';

    printf("Enter the password: ");
    fgets(userinppass, sizeof(userinppass), stdin);
    userinppass[strcspn(userinppass, "\n")] = '\0';

    comparefunc(userinpname,userinppass,username,password);


}*/

//---------------------------------------------------------------------------------------------------------

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alphafunction (const char *str, int *vow, int* cons){
    *vow = 0;
    *cons = 0;

    for (int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);

        if (isalpha(ch)){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                (*vow)++;
            } else{
                (*cons)++;
            }
        }
    }


}

int main (void){

    char char_array[100];

    int vowcount,constcount;

    printf("Enter a string: ");
    fgets(char_array, sizeof(char_array), stdin);
    char_array[strcspn(char_array, "\n")] = '\0';

    alphafunction(char_array, &vowcount, &constcount);

    printf("Vowels: %d\n", vowcount);
    printf("Consonants: %d\n", constcount);

    return 0;
}*/


//---------------------------------------------------------------------------------------------------------


