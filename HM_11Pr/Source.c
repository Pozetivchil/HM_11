#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() 
{
    system("chcp 1251");
    setlocale(LC_ALL, "RUS");

    char char_arr[2];
    int char_size = (char*)(&char_arr[1]) - (char*)(&char_arr[0]);
    printf("1) char: %d байтов\n", char_size);

    short int short_arr[2];
    int short_size = (char*)(&short_arr[1]) - (char*)(&short_arr[0]);
    printf("2) short int: %d байтов\n", short_size);

    unsigned short int ushort_arr[2];
    int ushort_size = (char*)(&ushort_arr[1]) - (char*)(&ushort_arr[0]);
    printf("3) unsigned short int: %d байтов\n", ushort_size);

    int int_arr[2];
    int int_size = (char*)(&int_arr[1]) - (char*)(&int_arr[0]);
    printf("4) int: %d байтов\n", int_size);

    unsigned char uchar_arr[2];
    int uchar_size = (char*)(&uchar_arr[1]) - (char*)(&uchar_arr[0]);
    printf("5) unsigned char: %d байтов\n", uchar_size);

    wchar_t wchar_arr[2];
    int wchar_size = (char*)(&wchar_arr[1]) - (char*)(&wchar_arr[0]);
    printf("6) wchar_t: %d байтов\n", wchar_size);

    long long int llong_arr[2];
    int llong_size = (char*)(&llong_arr[1]) - (char*)(&llong_arr[0]);
    printf("7) long long int: %d байтов\n", llong_size);

    size_t size_t_arr[2];
    int size_t_size = (char*)(&size_t_arr[1]) - (char*)(&size_t_arr[0]);
    printf("8) size_t: %d байтов\n", size_t_size);

    float float_arr[2];
    int float_size = (char*)(&float_arr[1]) - (char*)(&float_arr[0]);
    printf("9) float: %d байтов\n", float_size);

    double double_arr[2];
    int double_size = (char*)(&double_arr[1]) - (char*)(&double_arr[0]);
    printf("10) double: %d байтов\n", double_size);

    signed int signed_arr[2];
    int signed_size = (char*)(&signed_arr[1]) - (char*)(&signed_arr[0]);
    printf("11) signed int: %d байтов\n", signed_size);

    return 0;
}