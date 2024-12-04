#include <iostream>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n =5; // ��ũ ��
    hanoi(n, 'A', 'C', 'B'); // A, B, C�� ��� �̸�
    return 0;
}
