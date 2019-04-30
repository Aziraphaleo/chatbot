#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "chat.h"

void split( char **arr, char *str, const char *del)//字符分割函数的简单定义和实现
{
    char *s =NULL;
    s=strtok(str,del);
    while(s != NULL)
    {
        *arr++ = s;
        s = strtok(NULL,del);
    }
}
