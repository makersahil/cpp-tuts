#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, res, ch;
    // clrscr();
    printf("\n Menu \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Mod");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    if (ch >= 1 && ch <= 5)
    {
        printf("Enter First Number: ");
        scanf("%d", &x);
        printf("Enter Second Number: ");
        scanf("%d", &y);
    }

    switch (ch)
    {
    case 1:
        res = x + y;
        printf("Sum = %d", res);
        break;
    case 2:
        res = x - y;
        printf("Difference = %d", res);
        break;
    case 3:
        res = x * y;
        printf("Product = %d", res);
        break;
    case 4:
        res = x / y;
        printf("Division = %d", res);
        break;
    case 5:
        res = x % y;
        printf("Remainder = %d", res);
        break;

    default:
        printf("Invalid Choice!");
        break;
    }
    getch();
}