#include <stdio.h>
int main()
{
    int mark;
    printf("enter a Mark ");
    scanf("%d", &mark);

    if (mark >= 35 && mark <= 40)
    {
        printf("D grade");
    }
    else if (mark > 40 && mark <= 60)
    {
        printf("C Grade");
    }
    else if (mark > 60 && mark <= 80)
    {
        printf("B grade");
    }
    else if (mark > 80 && mark <= 90)
    {
        printf("A grade");
    }
    else if (mark > 90 && mark <= 100)
    {
        printf("A+ grade");
        return 0;
    }
}