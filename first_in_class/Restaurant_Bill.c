#include <stdio.h> //input/output library
#include <stdlib.h> //random number generator
#include <time.h> //time/date utilities

int main() {
   
    int choice;
    double tip, tax, total;

    printf("What is the tax rate in your state? (Please input in percentage)");
    scanf("%lf", &tax);
    tax = tax / 100; //convert to decimal

    //printf("\nTax is %.2f", tax); testing print for double

    srand(time(NULL));
    choice = rand()%3;
    //choice = 3; testing for each case working
    //printf("\n%d", choice); testing print for int

    if(choice == 0){
        double salad = 9.95;
        total = salad + (salad * tax);
        printf("\nPrice of your salad is $9.95. \nThe price after taxes is: $%.2f", total);

        printf("\n\nHow much would you like to tip? (Please input in percentage)");
        scanf("%lf", &tip);

        tip = tip / 100; //convert to decimal
        double newTotal = total + (total * tip);

        printf("Your total comes out to: $%.2f", newTotal);

    }else if(choice == 1){
        double soup = 4.55;
        total = soup + (soup * tax);
        printf("\nPrice of your soup is $4.55. \nThe price after taxes is: $%.2f", total);

        printf("\n\nHow much would you like to tip? (Please input in percentage)");
        scanf("%lf", &tip);

        tip = tip / 100; //convert to decimal
        double newTotal = total + (total * tip);

        printf("Your total comes out to: $%.2f", newTotal);

    }else if(choice == 2){
        double sandwich = 13.25;
        total = sandwich + (sandwich * tax);
        printf("\nPrice of your sandwich is $13.25. \nThe price after taxes is: $%.2f", total);

        printf("\n\nHow much would you like to tip? (Please input in percentage)");
        scanf("%lf", &tip);

        tip = tip / 100; //convert to decimal
        double newTotal = total + (total * tip);

        printf("Your total comes out to: $%.2f", newTotal);

    }else{
        double pizza = 22.35;
        total = pizza + (pizza * tax);
        printf("\nPrice of your pizza is $22.35. \nThe price after taxes is: $%.2f", total);

        printf("\n\nHow much would you like to tip? (Please input in percentage)");
        scanf("%lf", &tip);

        tip = tip / 100; //convert to decimal
        double newTotal = total + (total * tip);

        printf("Your total comes out to: $%.2f", newTotal);
    }

   return 0;
}