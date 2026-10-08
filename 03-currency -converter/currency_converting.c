#include <stdio.h>

void USD_CONVERTER(int converting_currency)
{
    float RATE_1, RATE_2;

    printf("how much money you want to convert :");
    scanf("%f", &RATE_1);

    switch (converting_currency)
    {
    case 2:
        RATE_2 = 96.75 * RATE_1;
        printf("US DOLLAR TO INDIAN RUPEE = %f", RATE_2);
        break;
    case 3:
        RATE_2 = 0.89 * RATE_1;
        printf("US DOLLAR TO EURO  = %f", RATE_2);
        break;
    case 4:
        RATE_2 = 0.76 * RATE_1;
        printf("US DOLLAR TO BRITISH POUND = %f", RATE_2);
        break;
    case 5:
        RATE_2 = 158.23 * RATE_1;
        printf("US DOLLAR TO JAPANESE YEN = %f", RATE_2);
        break;
    default:
        printf("invalid choice !...\n");
        break;
    }
}

void INR_CONVERTER(int converting_currency)
{
    float RATE_1, RATE_2;

    printf("how much money you want to convert :");
    scanf("%f", &RATE_1);

    switch (converting_currency)
    {
    case 1:
        RATE_2 = 0.010 * RATE_1;
        printf("INDIAN RUPEE TO US DOLLAR = %f", RATE_2);
        break;
    case 3:
        RATE_2 = 0.0092 * RATE_1;
        printf("INDIAN RUPEE TO EURO  = %f", RATE_2);
        break;
    case 4:
        RATE_2 = 0.0078 * RATE_1;
        printf("INDIAN RUPEE TO BRITISH POUND = %f", RATE_2);
        break;
    case 5:
        RATE_2 = 1.64 * RATE_1;
        printf("INDIAN RUPEE TO JAPANESE YEN = %f", RATE_2);
        break;
    default:
        printf("invalid choice !...\n");
        break;
    }
}

void EURO_CONVERTER(int converting_currency)
{
    float RATE_1, RATE_2;

    printf("how much money you want to convert :");
    scanf("%f", &RATE_1);

    switch (converting_currency)
    {
    case 1:
        RATE_2 = 1.12 * RATE_1;
        printf("EURO TO US DOLLAR = %f", RATE_2);
        break;
    case 2:
        RATE_2 = 108.31 * RATE_1;
        printf("EURO TO INDIAN RUPEE  = %f", RATE_2);
        break;
    case 4:
        RATE_2 = 0.85 * RATE_1;
        printf("EURO TO BRITISH POUND = %f", RATE_2);
        break;
    case 5:
        RATE_2 = 177.12 * RATE_1;
        printf("EURO TO JAPANESE YEN = %f", RATE_2);
        break;
    default:
        printf("invalid choice !...\n");
        break;
    }
}

void BRITISH_POUND_CONVERTER(int converting_currency)
{
    float RATE_1, RATE_2;

    printf("how much money you want to convert :");
    scanf("%f", &RATE_1);

    switch (converting_currency)
    {
    case 1:
        RATE_2 = 1.32 * RATE_1;
        printf("BRITISH POUND TO US DOLLAR = %f", RATE_2);
        break;
    case 2:
        RATE_2 = 127.71 * RATE_1;
        printf("BRITISH POUND TO INDIAN RUPEE  = %f", RATE_2);
        break;
    case 3:
        RATE_2 = 1.18 * RATE_1;
        printf("BRITISH POUND TO EURO  = %f", RATE_2);
        break;
    case 5:
        RATE_2 = 208.88 * RATE_1;
        printf("BRITISH POUND TO JAPANESE YEN = %f", RATE_2);
        break;
    default:
        printf("invalid choice !...\n");
        break;
    }
}

void JAPANESE_YEN_CONVERTER(int converting_currency)
{
    float RATE_1, RATE_2;

    printf("how much money you want to convert :");
    scanf("%f", &RATE_1);

    switch (converting_currency)
    {
    case 1:
        RATE_2 = 0.0063 * RATE_1;
        printf("JAPANESE YEN TO US DOLLAR = %f", RATE_2);
        break;
    case 2:
        RATE_2 = 0.61 * RATE_1;
        printf("JAPANESE YEN TO INDIAN RUPEE  = %f", RATE_2);
        break;
    case 3:
        RATE_2 = 0.0056 * RATE_1;
        printf("JAPANESE YEN TO EURO  = %f", RATE_2);
        break;
    case 4:
        RATE_2 = 0.0048 * RATE_1;
        printf("JAPANESE YEN TO BRITISH POUND  = %f", RATE_2);
        break;
    default:
        printf("invalid choice !...\n");
        break;
    }
}
int main()
{
    int choice_1, choice_2;
    while (1)
    {
        printf("--------------------------------------\n");
        printf("--------- CURRENCY CONVERTER ---------\n");
        printf("--------------------------------------\n");
        printf("HERE ARE AVAILABLE CURRENCIES :- \n");
        printf("enter your choice : \n");
        printf("1. USD - US Dollar \n");
        printf("2. INR - Indian Rupee \n");
        printf("3. EUR - Euro \n");
        printf("4. GBP - British Pound \n");
        printf("5. JPY - Japanese Yen \n");
        printf("6. DO YOU WANT TO QUIT...(ENTER SAME CHOICE..)\n");
        printf("--------------------------------------\n");
        printf("ENTER THE CURRENCY WHICH YOU WANT TO CHANGE :-");
        scanf("%d", &choice_1);
        printf("ENTER THE CURRENCY WHICH YOU WANT TO REPLACE WITH :-");
        scanf("%d", &choice_2);

        if (choice_1 == 6)
        {
            printf("THANK YOU FOR VISITING MY CURRENCY CONVERTER....\n");
            return 0;
        }

        if ((choice_1 < 0 || choice_1 > 5) || (choice_2 < 0 || choice_2 > 5))
        {
            printf("please enter the valid choice...\n ");
            continue;
        }

        if (choice_1 == choice_2)
        {
            printf("Both currencies are same!\n");
            continue;
        }
        else
        {
            switch (choice_1)
            {
            case 1:
                USD_CONVERTER(choice_2);
                break;
            case 2:
                INR_CONVERTER(choice_2);
                break;
            case 3:
                EURO_CONVERTER(choice_2);
                break;
            case 4:
                BRITISH_POUND_CONVERTER(choice_2);
                break;
            case 5:
                JAPANESE_YEN_CONVERTER(choice_2);
                break;
            }
        }
    }
    return 0;
}
