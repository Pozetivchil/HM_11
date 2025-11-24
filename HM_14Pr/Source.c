#include <stdio.h>  
#include <stdlib.h>  
#include <limits.h> 
#include <float.h>  
#include <locale.h>

#define N 10 

int find_max_index_less_than_A(double* ptr_array, int n, double A);

int main()
{
    system("chcp 65001");
    setlocale(LC_ALL, "RUS");

    double array[N] = { 15.5, 2.0, 8.8, 19.1, 4.2, 7.7, 10.0, 1.1, 12.3, 3.3 };
    int size = N;
    double limit_A;

    printf("Введите значение A: ");
    scanf("%lf", &limit_A);

    printf("Исходный массив: \n");
    for (int i = 0; i < size; i++) 
    {
        printf("Индекс %d: %.1f\n", i, array[i]);
    }

    int result_index = find_max_index_less_than_A(array, size, limit_A);

    if (result_index != -1)
    {
        printf("Порядковый номер максимального элемента (< A): %d\n", result_index);
        printf("Значение элемента: %.1f\n", array[result_index]);
    }
    else
    {
        printf("Элементов, меньших %.2f, в массиве не найдено.\n", limit_A);
    }

    return 0;
}

int find_max_index_less_than_A(double* ptr_array, int n, double A)
{
    double max_value = -99999999;
    int max_index = -1;

    for (int i = 0; i < n; i++)
    {
        if (ptr_array[i] < A)
        {
            if (ptr_array[i] > max_value)
            {
                max_value = ptr_array[i];
                max_index = i;
            }
        }
    }

    return max_index;
}