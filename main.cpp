#include "mbed.h"

/*
next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 followed by 1.
*/
// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;


int max_terms = 10;

int main()
{

    printif("Fibonacci series: %d,%d,", t_1, t_2);
    for( int i=10; i>5 ; i--){
        printif("loop %d \r\n", i);

    }


    while (true) {

    }
}

