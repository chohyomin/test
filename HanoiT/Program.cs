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
        Console.Write("Enter the number of disks: ");
        int n = Convert.ToInt32(Console.ReadLine()); // 사용자 입력
        Hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    }

}

