#include <stdio.h>

/**
 *This program asks from user to input any amount of integers.
 *Limit of integers is 100. Integers, that was recieved from User
 *will be stored in an array sized sizeof(int) * 100.
 *User enters the amount he wants and then numbers directly from keyboard one by one.
 *(1st number - enter - 2nd - enter etc)
 *Returns 0 if Success
 *Returns -1 if Amount is -
 *Returns -2 if Amount > 100
 *The output is all numbers, that user entered in his order, divided by ",".
 */
int main( int argc, char *argv[] ) {

    int LowestAvailableInputAmount = 0 ; // it will be used also for loops.
    int Limit = 100 ;
    int UserInputNumbersAmount = 0 ;
    int ArrayOfNumbers[100] ;


    printf( "How much number would you like to enter? (max100):\n" ) ;
    scanf( "%d", &UserInputNumbersAmount ) ;
    if ( UserInputNumbersAmount < LowestAvailableInputAmount ) {
        printf( "Invalid Amount\n" ) ;
        return -1 ;
    }
    if ( UserInputNumbersAmount > Limit ) {
        printf( "The limit of numbers is %d\n", Limit ) ;
        return -2 ;
    }

    //While loop that fulfill an array ArrayOfNumbers
    while ( LowestAvailableInputAmount < UserInputNumbersAmount ) {
        int step = 1 ;
        printf("Please enter number %d: ", LowestAvailableInputAmount + 1 ) ;
        scanf( "%d", &ArrayOfNumbers[LowestAvailableInputAmount] ) ;
        LowestAvailableInputAmount = LowestAvailableInputAmount + step ;
    }

    LowestAvailableInputAmount = 0 ; // This variable becomes 0 again after the while-loop is completed.
    printf( "Your numbers are: " ) ;
    //This while loop outputs user's numbers divided by ",".
    while ( LowestAvailableInputAmount < UserInputNumbersAmount ) {
        int step = 1 ;
        printf( "%d, ", ArrayOfNumbers[LowestAvailableInputAmount] ) ;
        LowestAvailableInputAmount = LowestAvailableInputAmount + step ;
    }
    printf( "\b\b.\nThanks for using.\n" ) ;

   return 0 ;
}
