#include <stdio.h>
#include <stdlib.h>

void CHOICE();
void ADD_FUN();
void SUB_FUN();
void MULTI_FUN();
void DIV_FUN();
void MODULUS_FUN();

void ADD_FUN() {
    int size;

    printf("HOW MANY NUMBER'S ADDITION YOU WANT FOR :- ");
    scanf("%d", &size);

    float array[size], sum = 0.0;

    for(int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER :- ");
        scanf("%f", &array[i]);

        sum += array[i];
    }

    printf("SUM = %.2f\n", sum);
}


void SUB_FUN() {
    int size;

    printf("HOW MANY NUMBER'S SUBTRACTION YOU WANT FOR :- ");
    scanf("%d", &size);

    float array[size], sub;

    for(int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER :- ");
        scanf("%f", &array[i]);
    }

    sub = array[0];

    for(int i = 1; i < size; i++) {
        sub -= array[i];
    }

    printf("SUBTRACTION = %.2f\n", sub);
}


void MULTI_FUN() {
    int size;

    printf("HOW MANY NUMBER'S MULTIPLICATION YOU WANT FOR :- ");
    scanf("%d", &size);

    float array[size], multi = 1.0;

    for(int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER :- ");
        scanf("%f", &array[i]);
    }

    for(int i = 0; i < size; i++) {
        multi *= array[i];
    }

    printf("MULTIPLICATION = %.2f\n", multi);
}


void DIV_FUN() {
    int size;

    printf("HOW MANY NUMBER'S DIVISION YOU WANT FOR :- ");
    scanf("%d", &size);

    float array[size], div;

    for(int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER :- ");
        scanf("%f", &array[i]);
    }

    div = array[0];

    for(int i = 1; i < size; i++) {

        if(array[i] == 0) {
            printf("MATH ERROR...\n");
            printf("NUMBER CAN'T BE DIVIDED BY ZERO...\n");
            return;
        }

        div /= array[i];
    }

    printf("DIVISION = %.2f\n", div);
}


void MODULUS_FUN() {
    int number1, number2;
    int result;

    printf("ENTER THE NUM_1 :- ");
    scanf("%d", &number1);

    printf("ENTER THE NUM_2 :- ");
    scanf("%d", &number2);

    if(number2 == 0) {
        printf("MATH ERROR...\n");
        printf("NUMBER CAN'T BE DIVIDED BY ZERO...\n");
        return;
    }

    result = number1 % number2;

    printf("MODULUS = %d\n", result);
}


void CHOICE() {

    char ch;

    while(1) {

    printf("\n----------------- BASIC CALC -----------------\n");

    printf("ENTER THE CHOICE YOU WANT :-\n");
    printf("1 ] ADDITION\n");
    printf("2 ] SUBTRACTION\n");
    printf("3 ] MULTIPLICATION\n");
    printf("4 ] DIVISION\n");
    printf("5 ] MODULUS\n");
    printf("6 ] EXIT\n");

    printf("ENTER CHOICE :- ");
    scanf(" %c", &ch);

    if(ch == '6') {

        printf("\n----------------- THANK YOU FOR USING THIS CALC! -----------------\n");

        break;
    }

    switch(ch) {

        case '1':
            ADD_FUN();
            break;

        case '2':
            SUB_FUN();
            break;

        case '3':
            MULTI_FUN();
            break;

        case '4':
            DIV_FUN();
            break;

        case '5':
            MODULUS_FUN();
            break;

        default:
            printf("ENTER THE VALID CHOICE....\n");
            break;
    }
}
}


int main() {
    CHOICE();
    return 0;
}