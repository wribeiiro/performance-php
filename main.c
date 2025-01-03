#include <stdio.h>
#include <time.h>

int main() {
    clock_t startTime = clock();

    int test = 0;
    const int total = 10000000;
    int i = 0;

    while (i < total) {
        test = i;
        i++;
    }

    clock_t endTime = clock();

    double elapsedTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
    printf("%f\n", elapsedTime);

    return 0;
}
