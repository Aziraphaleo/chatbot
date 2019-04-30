#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stddef.h>
#include <time.h>
#include "chat.h"


void split( char **arr, char *str, const char *del);
double Add(double a,double b);
double Sub(double a,double b);
double Mul(double a,double b);
double Div(double a,double b);

int main()
{
    int q=0;
    q=name();//enter name
    switch(q)
    {
        case 1:
            smtalk();
            break;
            
            
        case 2:;
            printf("Prometheus:Good bye! Hope to see you next time.\n");

    }
    
}




