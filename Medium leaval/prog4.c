// find character yes or not
#include <stdio.h>
int main()
{

    char ch;
    printf(" write input ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case ");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
    else
    {
        printf("Not a character ");
    }
    return 0;
}