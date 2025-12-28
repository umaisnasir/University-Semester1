#include <stdio.h>

int main() {
    int count, asterisk, space;

    //  TOP HALF OF THE DIAMOND 

    space = 5; // four dashes + 1 star
    for (count = 1; count <= 9; count = count + 2) {  // Loop for odd counts: 1, 3, 5, 7, 9 (stars)
        
        for (asterisk = 1; asterisk <= 9; asterisk++) {  // Loop through each position in the line (1–9)
            
            if (asterisk < space) {
                printf("-");  // Print '-' (acts as spaces before the stars)
            } else if (asterisk < space + count) {
                printf("*");  // Print '*' (the stars in each line)
            }
        }

        printf("\n");  // Move to the next line
        space--;        // Decrease space count to move stars outward
    }

// 1st iteration (outer loop): count = 1, space = 5, asterisk = 1-9

// if (1,2,3,4  <  5) → true for asterisk until asterisk = 1,2,3,4 → print 4 dashes -- 4 times loop has run, now the value for asterisk will be 5
// elseif (5  <  6) → true → print 1 asterisk
// (6,7,8,9 - no match - loop exit)  
// output → ----*


// 2nd iteration (outer loop): count = 3, space = 4, asterisk = 1-9

// if (1,2,3  <  4) → true for asterisk until asterisk = 1,2,3 → print 3 dashes -- 3 times loop has run, now the value for asterisk will be 4
// elseif (4,5,6 <  7) true → print 3 asterisks
// (7,8,9 - no match - loop exit)  
// output → ----*


// 4th iteration: count = 7, space = 2, asterisk = 1-9 

// if (1 < 2) → true for asterisk until asterisk = 1 → print 1 dash -- 1 times loop has run, now the value for asterisk will be 2
// elseif (2,3,4,5,6,7,8 < 9) → true → print 7 asterisks
// (9 - no match - loop exit) 
// output → -*******



//    ----- BOTTOM HALF OF THE DIAMOND -----

    space = 2; // Start with 2 leading spaces for bottom half
    for (count = 7; count >= 1; count = count - 2) {  // Loop for odd counts decreasing: 7, 5, 3, 1
        
        for (asterisk = 1; asterisk <= 9; asterisk++) {  // Again, loop through each position (1–9)
            if (asterisk < space) {
                printf("-");  // Print '-' before stars
            } else if (asterisk < space + count) {
                printf("*");  // Print the stars
            }
        }

        printf("\n");  // Move to the next line
        space++;        // Increase space count to move stars inward
    }

    return 0;


// 1st iteration (outer loop): count = 7, space = 2, asterisk = 1-9

// if ( 1 < 2 ) → true for asterisk until asterisk = 1  → print 1 dashe -- 1 times loop has run, now the value for asterisk will be 2
// elseif (2,3,4,5,6,7,8  <  9) true → print 7 asterisks
// (9 - no match - loop exit)  
// output → -*******


// 3rd iteration (outer loop): count = 3, space = 4, asterisk = 1-9

// if ( 1,2,3 < 4 ) → true for asterisk until asterisk = 3  → print 3 dashes -- 3 times loop has run, now the value for asterisk will be 4
// elseif (4,5,6  <  7) true → print 3 asterisks
// (7,8,9 - no match - loop exit)  
// output → -*******

// 4th iteration (outer loop): count = 1, space = 5, asterisk = 1-9

// if ( 1,2,3,4 < 5 ) → true for asterisk until asterisk = 4  → print 4 dashes -- 4 times loop has run, now the value for asterisk will be 5
// elseif (5  <  6) true → print 1 asterisks
// (6,7,8,9 - no match - loop exit)  
// output → -*******


}
