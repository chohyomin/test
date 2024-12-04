
def hanoi(n, from_rod, to_rod, aux_rod):
    # 하노이탑 문제를 해결하는 재귀 함수
    if n == 1:
        print(f"Move disk 1 from {from_rod} to {to_rod}")
        return
    hanoi(n - 1, from_rod, aux_rod, to_rod)
    print(f"Move disk {n} from {from_rod} to {to_rod}")
    hanoi(n - 1, aux_rod, to_rod, from_rod)

if __name__ == "__main__":
    while True:
        n = int(input("Enter the number of disks (positive integer): "))
        if n > 0:
            break
        print("Please enter a positive integer.")

    print(f"Moves to solve the Towers of Hanoi with {n} disks:")
    hanoi(n, 'A', 'C', 'B')  # A, B, C는 기둥 이름
