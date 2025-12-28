// Write a program to compare two strings.

#include <stdio.h>
#include <string.h>

int main(void) {

    char username[11] = "umaisnasir";
    char password[11] = "abc.123";

    char userinput1[100];
    char userinput2[100];

    printf("Enter the username: ");
    fgets(userinput1, 100, stdin);
    userinput1[strcspn(userinput1, "\n")] = '\0';  //This line removes the newline 
                                                   //character from the input string by replacing it with '\0' 
                                                   //so that string comparison works correctly.

    printf("Enter the password: ");
    fgets(userinput2, 100, stdin);
    userinput2[strcspn(userinput2, "\n")] = '\0'; // same as above

// strcmp function returns 0 if both arguments are equal.

    if (strcmp(userinput1, username) == 0 && strcmp(userinput2, password) == 0) {
        printf("Both username and password are similar!\n");
    }
    else if (strcmp(userinput1, username) == 0) {
        printf("Username is similar, but Password isn't!\n");
    }
    else if (strcmp(userinput2, password) == 0) {
        printf("Password is similar, but Username isn't!\n");
    }
    else {
        printf("RETRY\n");
    }

    return 0;
}




#include <stdio.h>
#include <string.h>

/*
    Compares user input with stored username and password.
*/
void compareCredentials(const char *inputUser,
                        const char *inputPass,
                        const char *storedUser,
                        const char *storedPass) {

    if (strcmp(inputUser, storedUser) == 0 &&
        strcmp(inputPass, storedPass) == 0) {

        printf("Both username and password are similar!\n");
    }
    else if (strcmp(inputUser, storedUser) == 0) {
        printf("Username is similar, but Password isn't!\n");
    }
    else if (strcmp(inputPass, storedPass) == 0) {
        printf("Password is similar, but Username isn't!\n");
    }
    else {
        printf("RETRY\n");
    }
}

int main(void) {

    char username[11] = "umaisnasir";
    char password[11] = "abc.123";

    char userinput1[100];
    char userinput2[100];

    printf("Enter the username: ");
    fgets(userinput1, sizeof(userinput1), stdin);
    userinput1[strcspn(userinput1, "\n")] = '\0';

    printf("Enter the password: ");
    fgets(userinput2, sizeof(userinput2), stdin);
    userinput2[strcspn(userinput2, "\n")] = '\0';

    compareCredentials(userinput1, userinput2, username, password);

    return 0;
}
