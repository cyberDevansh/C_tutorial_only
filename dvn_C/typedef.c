#include <stdio.h>

typedef struct {
     int x;
     int y;
} Point;

void printPoint(Point p) {
     printf("Point(%d, %d)\n", p.x, p.y);
}

int main() {
     Point p1 = {10, 20};
     printPoint(p1);
     return 0;
}