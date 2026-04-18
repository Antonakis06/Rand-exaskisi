#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int n;
    int *arr;
    int sum = 0;
    float avg;

    printf("How many numbers? ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    int i;

    // γέμισμα
    for(i = 0; i < n; i++)
    {
        arr[i] = rand() % 50 + 1;
        sum += arr[i];
    }

    // αρχικοποίηση min/max ΜΕΤΑ το γέμισμα
    int min = arr[0];
    int max = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    avg = (float)sum / n;

    printf("O mikroteros einai %d\n", min);
    printf("O megalyteros einai %d\n", max);
    printf("O mesos oros einai %.2f\n", avg);

    printf("\nRandom numbers:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}