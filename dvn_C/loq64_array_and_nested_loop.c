#include <stdio.h>
#include <conio.h>
int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);
    getch();
    return 0;
}
