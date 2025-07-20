// enter your age 
#include<stdio.h>

    int main(){
        int age;
        printf("Enter Your Age ");
        scanf("%d",&age);

            if(age>=18){
                printf("they Can vote \n");
                printf("you can apply litsense \n");
                printf("they can drive");
            }
            else{
                printf("they are adult");
            }
            return 0;

    }