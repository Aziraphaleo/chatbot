#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"chat.h"


double Add(double a, double b)
{
    return a + b;
}
double Sub(double a, double b)
{
    return a - b;
}
double Mul(double a, double b)
{
    return a * b;
}
double Div(double a, double b)
{
    return a / b;
}



void calc(char ch[100]){
    int n=0;//number
    char m;//operator
    for(int j=0;j<100;j++){
        if(ch[j]=='+'){
            m='+';
            n=j;
            printf("Prometheus:%c%c%c=%.2lf\n",ch[n-1],m,ch[n+1],Add(con(ch[n-1]),con(ch[n+1])));
            break;
        }
        if(ch[j]=='-'){
            m='-';
            n=j;
            printf("Prometheus:%c%c%c=%.2lf\n",ch[n-1],m,ch[n+1],Sub(con(ch[n-1]),con(ch[n+1])));
            break;
        }
        if(ch[j]=='*'){
            m='*';
            n=j;
            printf("Prometheus:%c%c%c=%.2lf\n",ch[n-1],m,ch[n+1],Mul(con(ch[n-1]),con(ch[n+1])));
            break;
        }
        if(ch[j]=='/'){
            m='/';
            n=j;
            printf("Prometheus:%c%c%c=%.2lf\n",ch[n-1],m,ch[n+1],Div(con(ch[n-1]),con(ch[n+1])));
            break;
        }

        }//for
}

    
 //turn char into double
double con(char a){
    double value=0;
  if  ((a >= '0') && (a <= '9'))
{
    value =  a - '0';
}
    return value;
}
    
    
    

