#include "DynamicString.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_BUFFER_SIZE 100

int main()
{
    char* String = (char*)malloc(1);
    char buffer[MAX_BUFFER_SIZE];
    int flag = 1;
    String[0] = '\0';

    while(flag == 1)
    {
        printf("Current String: %s\n", String);
        printf("Insert a string to add or type (exit) to quit\n");

        fgets(buffer, sizeof(buffer), stdin);
        buffer[strindex(buffer, '\n')] = '\0';
        if(strcmp(buffer, "exit") == 0)
            return 1;
        String = (char*)realloc(String, strlen(buffer) + strlen(String) + 1); //Add 1 for '\0' character
        strappend(String, buffer);
        printf("\n");
    }
    free(String);
}
