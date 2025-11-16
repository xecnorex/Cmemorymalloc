#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    double *values = (double*)malloc(n * sizeof(double));
    int meow = n * sizeof(double);

    printf("Memory allocated: %d bytes\n", meow);

    for(int i = 0; i < n; i++)
    {
        printf("Enter value[%d]: ", i);
        scanf("%lf", &values[i]);
    }

    double sum = 0;
    double average;

    for(int i = 0; i < n; i++)
    {
        sum += values[i];
    }
    average = sum / n;
    printf("Average: %.2lf\n", average);

    double max = values[0];

    for(int i =0; i < n; i++)
    {
        if(values[i] > max)
        {
            max = values[i];
        }
    }
    printf("Largest: %.2lf", max);


    
    return 0;
}