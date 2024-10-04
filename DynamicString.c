#include <stdio.h>
#include <stdlib.h>

size_t strlen(char* str)
{
    size_t len = 0;
    while (*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}

int strcmp(char* c1, char* c2)
{
    int equal = 1;

    if(strlen(c1) != strlen(c2))
    {
        return 1;
    }
    else
    {
        for(int i = 0; i<strlen(c1); i++)
        {
            if((*c1+i) != (*c2+i))
                return 1;        
        }
    }
    return 0;
}

int strindex(char* String, char character)
{
    size_t len = strlen(String);
    for(int i=0; i<len; i++)
    {
        if (String[i] == character)
            return i;
    }
    return len;
}

char* strappend(char* str1, char* str2)
{
    size_t LENGTH = strlen(str1);
    size_t SIZE = strlen(str2);

    for(size_t i=0; i < SIZE; i++)
    {
        str1[LENGTH+i] = str2[i];
    }
    str1[LENGTH+SIZE] = '\0';
    return str1;
}