#include <stdio.h>

int main(void) {

//we start by setting up the variables

    int minimum;
    int maximum;
    int counter = 0;
    int input;

//now we ask for the min and max

    do {
        printf("Enter a range of numbers, then think of a number in that range. I will try to guess it! \n");

        printf("Enter range minimum: \n");
        scanf("%d", &minimum);

        printf("Enter range maximum: \n");
        scanf("%d", &maximum);

    } while (minimum >= maximum); //if the min is larger than or equal to the max, the program will re-ask for the range


    while (input != 3) { //if the user inputs too large or too small, then the program will loop back to here

        int program_guessed_number = (minimum+maximum)/2; //we calculate the guesses, which are the average of the min and max

        do {
            printf("My guess is %d \n", program_guessed_number);
            printf("1. Too Large \n");
            printf("2. Too Small \n");
            printf("3. Got it! \n");
            printf("Enter 1, 2, or 3 \n");
            scanf("%d", &input);

        } while ((input < 1)||(input > 3)); //if the user inputs a number lower than 1 or higher than 3, then the program restates the options

//we start with the too large option, the program will modify the guess and add 1 to the counter
        if (input == 1) {
            maximum = program_guessed_number - 1;
            counter = counter + 1;
        }
//the too small option modifies the guess and adds 1 to the counter
        else if (input == 2) {
            minimum = program_guessed_number + 1;
            counter = counter + 1;
        }
//finally, when the program guesses the number, it adds 1 to the counter and displays it
        else if(input == 3) {
            printf("Nice! \n");
            counter = counter + 1;
            printf("Guessed the number in %d tries \n", counter);
        }
    }
    return 0;
}
