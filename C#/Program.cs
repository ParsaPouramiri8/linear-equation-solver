using System;

class Program
{
    static void Main()
    {
        float a, b;

        Console.Write("ax + b \n");

        Console.Write("a: ");
        a = int.Parse(Console.ReadLine());

        Console.Write("b: ");
        b = int.Parse(Console.ReadLine());

        Console.WriteLine("\n");

        if (a == 0 && b == 0)
        {
            Console.WriteLine("y = 0");
        }
        else if (a == 0)
        {
            Console.WriteLine($"y = {b}");
        }
        else if (b == 0)
        {
            if (a == 0)
            {
                Console.WriteLine("y = x");
            }
            else
            {
                Console.WriteLine($"y = {a}x");
            }
        }
        else
        {
            if (a == 1)
            {
                Console.WriteLine($"y = x + {b}");
            }
            else
            {
                Console.WriteLine($"y = {a}x + {b}");
            }
        }
        Console.WriteLine($"x = {-((b) / a)}");
    }
}
