#include <stdbool.h>
#include <stdio.h>

int main() {
   	int n = 29;

    int cnt = 0;

    
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {

        \\this code is prime or not prime check.
        for (int i = 1; i <= n; i++) {

            // Check how many number is divisible
            this line n number type and this check prime or not prime 

            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 numbers
        // then it is not prime how to check 
        if (cnt > 2)
            printf("%d is NOT prime\n", n);

        // else it is prime
        else
            printf("%d is prime", n);
    }

    return 0;
}
