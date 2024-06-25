#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, c=0;
    // clrscr();
    printf("Enter a Num: ");
    scanf("%d", &n);

    i=1;
    while(i<=n) {
        if (n%i==0){
            c++;
        }
        i++;
    }

    if(c==2) {
        printf("%d is prime number", n);
    } else {
        printf("%d is not prime number", n);
    }

    getch();
}