#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {       //하노이 기본함수
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
    printf("Enter the number of disks: ");
    scanf("%d", &n); // 사용자 입력
    hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    return 0;
}
