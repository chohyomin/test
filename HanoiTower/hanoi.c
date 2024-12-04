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
    // ����� �Է� �� ��ȿ�� �˻�
    do {
        printf("Enter the number of disks (positive integer): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (n <= 0); // ��ȿ���� ���� ��� �ݺ�

    printf("Moves to solve the Towers of Hanoi with %d disks:\n", n);
    hanoi(n, 'A', 'C', 'B'); // A, B, C�� ��� �̸�
    return 0;
}
