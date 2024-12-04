using System;

// 하노이탑 문제를 해결하는 클래스
class TowersOfHanoi
{
    // 재귀적으로 하노이탑을 해결하는 함수

    static void Hanoi(int n, char from, char to, char aux)
    {
        if (n == 1)
        {
            Console.WriteLine($"Move disk 1 from {from} to {to}");
            return;
        }
        Hanoi(n - 1, from, aux, to);
        Console.WriteLine($"Move disk {n} from {from} to {to}");
        Hanoi(n - 1, aux, to, from);
    }

    static void Main(string[] args)
    {
        int n;
        do
        {
            Console.Write("Enter the number of disks (positive integer): ");
            n = Convert.ToInt32(Console.ReadLine());
            if (n <= 0)
            {
                Console.WriteLine("Please enter a positive integer.");
            }
        } while (n <= 0); // 유효하지 않은 경우 반복

        Console.WriteLine($"Moves to solve the Towers of Hanoi with {n} disks:");
        Hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    }



}

