#include <stdio.h>
#include <unistd.h>
#include <time.h> //for the sleep() function
#include <stdlib.h> //for the system("cls") function

/* Everytime we call the clock it will simply reset all the values */
int s = 0;
int m = 0;
int h = 0;

void my_clock(void){

    s++;

    if(s == 60){
        s = 0;
        m++;
    }else if(m == 60){
        m = 0;
        h++;
    }else if (h == 24){
        s = 0;
        m = 0;
        h = 0;
    }

    printf("%02d : %02d : %02d\n\n",h,m,s);

    sleep(1); /* Wait one second */

    system("cls"); /* Clear the terminal, and display the new clock */

    return;
}

int main(){

    while(1){
        my_clock();
    }

    return 0;
}
