#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int target,ch,number;
    target = rand() % 100 + 1;

    while(1) {
        printf("--------------------\n");
        printf("1. Start the game : \n");
        printf("2. quit : \n");
        scanf("%d",&ch);

        if(ch == 1) {

            printf("Enter The Number(1 to 100) : ");
            scanf("%d",&number);

            if(number >=1 && number <=100) {
                if(target == number) {
                    printf("Congratulations ! You achieve the target....🎉 \n");
                }
                else if(target < number) {
                    printf("Oops ! The number is higher than target.... \n");
                }
                else{
                    printf("Oops ! The number is lower than target.... \n");
                }
            }
            else{
                printf("Number must between 1 to 100.... \n");
            }
        }
        else if(ch == 2) {
            printf("Quit...\n");
            break;
        }
        else {
            printf("invalid choice...\n");
        }
    }

    return 0;
}

// => Dry run :-

// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 70
// Oops ! The number is higher than target.... 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 50
// Oops ! The number is higher than target.... 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 45
// Oops ! The number is higher than target.... 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 30
// Oops ! The number is lower than target.... 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 35
// Oops ! The number is lower than target.... 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 1
// Enter The Number(1 to 100) : 37
// Congratulations ! You achieve the target....🎉 
// --------------------
// 1. Start the game : 
// 2. quit : 
// 2
// Quit...