#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 0, d = 0;
    printf("1.+\n2.-\n3.*\n4./\n\nwhat kind of task do you want?:");
    scanf_s("%d", &c);
    printf("\n");
    
    printf("enter a first number:");
    scanf_s("%d", &a);
    printf("\n");
    printf("enter a second number:");
    scanf_s("%d", &b);

    if (c == 1)d = a + b;
    else if (c==2)d=a-b;
    else if (c==3)d=a*b;
    else if (c==4)d=a/b;

    printf("result:%d", d);

    return 0;
}

