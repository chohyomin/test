﻿using System;

class TowersOfHanoi
{
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
        int n = 3; // 디스크 수
        Hanoi(n, 'A', 'C', 'B'); // A, B, C는 기둥 이름
    }
}

