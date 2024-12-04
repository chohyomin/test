#include <iostream>

// �ϳ���ž ������ �ذ��ϴ� ��� �Լ�
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
    int n;
    // ����� �Է� �� ��ȿ�� �˻�
    do {
        std::cout << "Enter the number of disks (positive integer): ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "Please enter a positive integer." << std::endl;
        }
    } while (n <= 0); // ��ȿ���� ���� ��� �ݺ�

    std::cout << "Moves to solve the Towers of Hanoi with " << n << " disks:" << std::endl;
    hanoi(n, 'A', 'C', 'B'); // A, B, C�� ��� �̸�
    return 0;
}
