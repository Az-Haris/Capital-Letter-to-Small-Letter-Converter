#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char cl, sl;
    printf("Enter Your Capital Letter = ");
    scanf("%c", &cl);
    sl=cl+32;
    printf("Small Letter is = %c", sl);
    getch();
    return 0;
}

