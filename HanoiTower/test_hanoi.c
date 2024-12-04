#include <stdio.h>

// 하노이탑 문제를 해결하는 함수
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

// 테스트 함수
void test_hanoi() {
    printf("Testing Hanoi with 1 disk:\n");
    hanoi(1, 'A', 'C', 'B'); // 1개의 디스크를 A에서 C로 옮기는 테스트
}

int main() {
    test_hanoi(); // 테스트 함수 호출
    return 0;
}
