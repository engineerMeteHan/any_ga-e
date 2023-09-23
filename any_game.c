/// Engineer: MEtehan GENCER

// This is try program
// This software code was written by Metehan GENCER who is an Embedded System Engineer. He love Coding.

#include <stdio.h>
#include <conio.h>

int main(void){

    int c;
    const char stop = 48;

    printf("This program runs until 0 number is entered on the keyboard...\n");

    while(1)
    {
        if((c = _getche()) == stop)
            break;
        printf(" You typed wrong character: %c. Try again...\n", c);
    }
        return 0;

}
