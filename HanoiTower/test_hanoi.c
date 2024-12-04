#include <stdio.h>

// �ϳ���ž ������ �ذ��ϴ� �Լ�
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

// �׽�Ʈ �Լ�
void test_hanoi() {
    printf("Testing Hanoi with 1 disk:\n");
    hanoi(1, 'A', 'C', 'B'); // 1���� ��ũ�� A���� C�� �ű�� �׽�Ʈ
}

int main() {
    test_hanoi(); // �׽�Ʈ �Լ� ȣ��
    return 0;
}
