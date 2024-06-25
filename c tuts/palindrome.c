#include <stdio.h>
#include <conio.h>

void main() {
    int num, n, mod, rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    
    while (n>0)
    {
        rev = rev * 10;
        mod = n % 10;
        rev = rev + mod;
        n = n / 10;
    }

    if (num == rev) {
        printf("%d is a palindrome.", num);
    } else {
        printf("%d is not a palindrome.", num);
    }
    
    getch();

}