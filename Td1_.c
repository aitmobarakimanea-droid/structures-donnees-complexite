#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

Point saisirPoint() {
    Point p;
    printf("Entrer x et y : ");
    scanf("%d %d", &p.x, &p.y);
    return p;
}

void afficherPoint(Point p) {
    printf("(%d,%d)\n", p.x, p.y);
}

float distance(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

void triPoints(Point T[], int n) {
    int i, j;
    Point tmp;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(distance(T[i]) > distance(T[j])) {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }
}

int main() {
    int n = 3, i;
    Point T[3];

    for(i = 0; i < n; i++)
        T[i] = saisirPoint();

    triPoints(T, n);

    for(i = 0; i < n; i++)
        afficherPoint(T[i]);

    return 0;
}
