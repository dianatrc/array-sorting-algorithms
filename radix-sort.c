#include <stdio.h>
 
static void sort(void)
{
    // TODO: add radix sort algorithm here
int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Sortăm fiecare cifră, pornind de la cifra unităților (exp = 1, 10, 100, ...)
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}
 
int main()
{
    return 0;
}
