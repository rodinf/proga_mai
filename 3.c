/*
    Rodin Fedor
    m3o-121b-20
*/

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MAX_RAND_NUM 10

int rand_fill (int _arr[], unsigned int _nof_arr) {
    for (int i = 0; i < _nof_arr; i++) {
        _arr[i] = rand() % (MAX_RAND_NUM + 1);
        printf("%i ", _arr[i]);
    }
}

int sort (int _arr[], unsigned int _nof_arr) {

    int buff;

    unsigned int 
        start = 0,
        end = _nof_arr - 1;

    while (start < end) {

        for (int i = start; i < end; i++) {
            if (_arr[i] > _arr[i+1]) {
                buff = _arr[i+1];
                _arr[i+1] = _arr[i];
                _arr[i] = buff;
            }

        }
        
        end--;

        for (int i = end; i > start; i--) {
            if (_arr[i] < _arr[i-1]) {
                buff = _arr[i-1];
                _arr[i-1] = _arr[i];
                _arr[i] = buff;
            }
        }
        start++;

    }

}

int main (void) {

    srand(time(NULL));

    unsigned int nof_array;

    scanf("%u", &nof_array);

    int *arr;
  
    arr = (int*) malloc(nof_array * sizeof(int));

    rand_fill(arr, nof_array);

    printf("\n");

    sort(arr, nof_array);
  
    for (int i = 0; i < nof_array; i++)
    {
        printf("%i ", arr[i]);
    }
    
    free(arr);

    return 0;
}