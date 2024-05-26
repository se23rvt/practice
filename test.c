#include <stdio.h>
#include <time.h>

int main() {
    struct timespec start, end;
    long long int time_taken;
    int n = 1e9;
    clock_gettime(CLOCK_REALTIME, &start);
    for(int i=0; i<n; i++){

    }
    clock_gettime(CLOCK_REALTIME, &end);
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken += (end.tv_nsec - start.tv_nsec);

    printf("Time taken: %lld nanoseconds\n", time_taken);

    return 0;
}

