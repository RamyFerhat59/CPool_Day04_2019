/*
** EPITECH PROJECT, 2019
** my_evil_str.c
** File description:
** swap letters
*/

#include <stdio.h>

int my_strlen1(char const *str)
{
    int charcount = 0;

    while (str[charcount] != '\0'){
        charcount++;
    }
    return charcount;
}

char *my_evil_str(char *str)
{
    int end = my_strlen1(str);
    char temp;
    int i=0;

    for(i ; i < (my_strlen1(str))/2 ; i++){
        temp = str[i];
        str[i] = str[end-1];
        str[end-1] = temp;
        end = end - 1;
    }
    return str;
}

