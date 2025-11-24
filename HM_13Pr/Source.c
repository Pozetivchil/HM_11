/*
Составить программу, которая во введенной пользователем строке вставляет восклицательный знак после второго слова предложения.
*/ 

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
#define MAX_LEN 256

int main()
{
    system("chcp 1251");

    char sentence[MAX_LEN];
    int i = 0; 
    int word_count = 0;
    int insert_pos = -1; 

    puts("Пожалуйста, введите предложение:");

    fgets(sentence, MAX_LEN, stdin);


    int len = (int)strlen(sentence);

    if (sentence[len - 1] == '\n') 
    {
        sentence[len - 1] = '\0';
        len--;
    }

    while (sentence[i] != ' ' && sentence[i] != '\0') 
    {
        i++;
    }
    if (sentence[i] != '\0') 
    {
        word_count++;
    }

    while (sentence[i] == ' ' && sentence[i] != '\0') 
    {
        i++;
    }

    if (sentence[i] != '\0') 
    {
        while (sentence[i] != ' ' && sentence[i] != '\0') 
        {
            i++;
        }

        word_count++;
        insert_pos = i;
    }

    if (word_count >= 2 && insert_pos != -1) 
    {
        for (int j = (int)len; j >= insert_pos; j--) 
        {
            sentence[j + 1] = sentence[j];
        }

        sentence[insert_pos] = '!';

        sentence[insert_pos + 1] = '\0';

        puts("Преобразованное предложение:");
        puts(sentence);
    }
    else 
    {
        puts("Введенная строка содержит менее двух слов, вставка не выполнена.");
    }

    return 0;
}