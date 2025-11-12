#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    system("chcp 1251");


    int n, last_zero_index = -1, sum = 0;
    int* arr;
    
    printf("¬ведите количество элементов массива: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("¬ведите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        if (arr[i] == 0) 
        {
            last_zero_index = i;
            break;
        }
    }

    printf("\n»сходный массив:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = last_zero_index + 1; i < n; i++)
    {
        sum += abs(arr[i]);
    }

    printf("—умма модулей элементов после последнего нулевого элемента: %d\n", sum);
    
    free(arr);

    return 0;
}