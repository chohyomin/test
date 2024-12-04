#include <iostream>

// 하노이탑 문제를 해결하는 재귀 함수
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
    // 사용자 입력 및 유효성 검사
    do {
        std::cout << "Enter the number of disks (positive integer): ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "Please enter a positive integer." << std::endl;
        }
    } while (n <= 0); // 유효하지 않은 경우 반복

    std::cout << "Moves to solve the Towers of Hanoi with " << n << " disks:" << std::endl;
    hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    return 0;
}
