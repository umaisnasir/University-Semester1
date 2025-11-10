#include <stdio.h>

int main()
{
    int table=45, n=1; // Declaring table = 45 because we have to print 45-times table // Declaring n = 1 because the while loop 
    // will run from 1 until 11 (11 because our loop will end before 11 - as it says while n != 12 which means it will stop at 11)
    while (n != 12)
    {
        printf("%d x %2d = %3d\n", table, n, table*n); // first %d is table i.e. 45
                                                       // second %2d is for n - which goes from 1 till 11
                                                       // third %3d is for table (which is 45) multiplied by n (whose value will
                                                       // increment with every iteration)
        n = n + 1;
    }



}
