#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include "chat.h"

void gettime(){
    time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    printf("Prometheus:It's %d:%d:%d, Beijing time.\n",8+p->tm_hour,p->tm_min,p->tm_sec);
}

void getday(char **arr){
    time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    printf("Prometheus:It's %d.%d.%d,%s.\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,arr[p->tm_wday]);
}



