#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    // 사용자 입력 및 유효성 검사
    do {
        printf("Enter the number of disks (positive integer): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (n <= 0); // 유효하지 않은 경우 반복

    printf("Moves to solve the Towers of Hanoi with %d disks:\n", n);
    hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    return 0;
}
