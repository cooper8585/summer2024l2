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

int fib(int n){
    //inp: position of the fib sequence
    //out: the number in sequence
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else{
        return(fib(n-1) + fib(n-2));
    }

    return 0;
}

int main()
{

    printf("Fibonacci series: %d,%d,", t_1, t_2);
    for( int i=0; i<max_terms; i++){
        next_term = t_1 + t_2;
        printif("%d, ", next_term);
        t_1 = t_2;
        t_2 = next_term;
    }
    printf("\r\n");
    printf("Fib series recursive");
    for(int i=0, i<maxterms; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");

    while (true) {

    }
}

