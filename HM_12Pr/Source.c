#include <stdio.h>

int main() {
    // Функция для вычисления размера типа через адресную арифметику
#define CALC_SIZE(type) ({ \
        type arr[2]; \
        (char*)(&arr[1]) - (char*)(&arr[0]); \
    })

    // 1) char
    char char_arr[2];
    int char_size = (char*)(&char_arr[1]) - (char*)(&char_arr[0]);
    printf("1) char: %d byte(s)\n", char_size);

    // 2) short int
    short int short_arr[2];
    int short_size = (char*)(&short_arr[1]) - (char*)(&short_arr[0]);
    printf("2) short int: %d byte(s)\n", short_size);

    // 3) unsigned short int
    unsigned short int ushort_arr[2];
    int ushort_size = (char*)(&ushort_arr[1]) - (char*)(&ushort_arr[0]);
    printf("3) unsigned short int: %d byte(s)\n", ushort_size);

    // 4) int
    int int_arr[2];
    int int_size = (char*)(&int_arr[1]) - (char*)(&int_arr[0]);
    printf("4) int: %d byte(s)\n", int_size);

    // 5) unsigned char
    unsigned char uchar_arr[2];
    int uchar_size = (char*)(&uchar_arr[1]) - (char*)(&uchar_arr[0]);
    printf("5) unsigned char: %d byte(s)\n", uchar_size);

    // 6) wchar_t
    wchar_t wchar_arr[2];
    int wchar_size = (char*)(&wchar_arr[1]) - (char*)(&wchar_arr[0]);
    printf("6) wchar_t: %d byte(s)\n", wchar_size);

    // 7) long long int
    long long int llong_arr[2];
    int llong_size = (char*)(&llong_arr[1]) - (char*)(&llong_arr[0]);
    printf("7) long long int: %d byte(s)\n", llong_size);

    // 8) size_t
    size_t size_t_arr[2];
    int size_t_size = (char*)(&size_t_arr[1]) - (char*)(&size_t_arr[0]);
    printf("8) size_t: %d byte(s)\n", size_t_size);

    // 9) float
    float float_arr[2];
    int float_size = (char*)(&float_arr[1]) - (char*)(&float_arr[0]);
    printf("9) float: %d byte(s)\n", float_size);

    // 10) double
    double double_arr[2];
    int double_size = (char*)(&double_arr[1]) - (char*)(&double_arr[0]);
    printf("10) double: %d byte(s)\n", double_size);

    // 11) signed int
    signed int signed_arr[2];
    int signed_size = (char*)(&signed_arr[1]) - (char*)(&signed_arr[0]);
    printf("11) signed int: %d byte(s)\n", signed_size);

    return 0;
}