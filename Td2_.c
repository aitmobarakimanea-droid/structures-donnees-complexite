#include <stdio.h>

int minIndex(int T[], int n) {
    int i, index = 0;
    for(i = 1; i < n; i++) {
        if(T[i] < T[index])
            index = i;
    }
    return index;
}

int puissance(int a, int n) {
    if(n == 0) return 1;
    return a * puissance(a, n-1);
}

int main() {
    int T[] = {5,2,4,1,7};
    int n = 5;

    printf("Index min = %d\n", minIndex(T, n));
    printf("2^3 = %d\n", puissance(2,3));

    return 0;
}
