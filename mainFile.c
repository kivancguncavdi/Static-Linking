#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <sortFunc.h>

int main() {
    
    srand(time(NULL));
	int N=5;
    int ARR[N];

    for(int i=0; i<N; i++) {
        ARR[i] = rand() % 20;
        printf("%d\n", ARR[i]);
    }
        
    printf("\n");
    sortFunc(ARR, N);

    for(int i=0; i<N; i++)
        printf("%d\n", ARR[i]);
    
    return 0;

}
