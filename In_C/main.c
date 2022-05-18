#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */

/* Creating a Structures type */ 
struct date{
    int month;
    int day;
    int year;
};
/* Structure variables */
struct date today, tomorrow, yesterday, holiday;



int main(){
    /* Initializing Global Variables */
    today.month = 5; today.day = 18; today.year = 22; // today 
    tomorrow.month = 5; tomorrow.day= 6; tomorrow.year = 22; // tomorrow
    yesterday.month = 5; yesterday.day = 4; yesterday.year = 22; // yesterday
    holiday = (struct date){5, 10, 22};

    printf("today is %d/%d/%d\n", today.day, today.month, today.year);
    printf("Yesterday is %d/%d/%d\n", yesterday.day, yesterday.month, yesterday.year);
    printf("tomorrow is %d/%d/%d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    printf("holiday is %d/%d/%d\n", holiday.day, holiday.month, holiday.year);

    return 0;
}

/* Function Details */