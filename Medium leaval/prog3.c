// ternary operators
#include <stdio.h>
int main()
{
    int age;
    printf("enter a age ");
    scanf("%d", &age);

    age > 18 ? printf("You can apply car license") : printf("can't apply ");
    return 0;
}