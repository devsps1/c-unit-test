#include <stdio.h>
#include "average.h"

int main()
{
    float arr[] = {-1.0, 2.0, 3.0, -2.0};
    float avg = average(arr, 4);
    printf("Avergae: %f\r\n", avg);
    return 0;
}