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
    while (true) {
        std::cout << "Enter the number of disks (positive integer): ";
        if (std::cin >> n && n > 0) {
            break;
        }
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        std::cin.clear(); // 오류 플래그 해제
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 입력 버퍼 비우기
    }

    std::cout << "Moves to solve the Towers of Hanoi with " << n << " disks:" << std::endl;
    hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    return 0;
}

