#include <stdio.h>
 
static void sort(void)
{
    // TODO: add bubble sort algorithm here
   int i, j, temp;
    int swapped;

    // Parcurge toate elementele
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Inițializare flag pentru a verifica dacă s-au făcut schimbări

        // Parcurge elementele nesortate
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Schimbă elementele
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Marchez că s-a efectuat o schimbare
            }
        }
    if (!swapped) {
            break;
        }
    }
}
 
int main()
{
    return 0;
}

