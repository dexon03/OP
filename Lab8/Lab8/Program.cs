using System;
using System.Xml;

namespace Lab8
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Console.Write("Розмiр масиву = ");
            int n = int.Parse(Console.ReadLine());
            int[,] a = new int[n,n];
            int[,] b = new int[n,n];
            set_arr(a); // заповнюємо масив а.
            set_arr(b); // заповнюємо масив b.
            Console.WriteLine("Масив а:");
            output(a);
            Console.WriteLine("\nМасив b:");
            output(b);
            float T = (float)(max_sum(a) + max_sum(b)) / (1 + min_sum(a) * min_sum(b));
            Console.WriteLine("T = " + T);

        }

        static void set_arr(int[,] a)
        {
            Random random = new Random();
            for (int i = 0; i < a.GetLength(0); i++)
            {
                for (int j = 0; j< a.GetLength(1); j++)
                {
                    a[i, j] = random.Next(100);
                }
            }
        }
        static void output(int[,] a)
        {
            for (int i = 0; i < a.GetLength(0); i++)
            {
                for (int j = 0; j< a.GetLength(1); j++)
                {
                    Console.Write(a[i,j] + "\t");
                }
                Console.WriteLine();
            }
        }
        static int max_sum(int[,] a)
        {
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < a.GetLength(0); i++)
            {
                for (int j = 0; j < a.GetLength(1); j++)
                {
                    sum1 += a[i, j];
                }
                
                if (sum1 > sum2)
                {
                    sum2 = sum1;
                }

                sum1 = 0;
            }

            return sum2;
        }
        static int min_sum(int[,] a)
        {
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < a.GetLength(1); i++)
            {
                sum1 += a[0, i];
            }
            for (int i = 1; i < a.GetLength(0); i++)
            {
                for (int j = 0; j < a.GetLength(1); j++)
                {
                    sum2 += a[i, j];
                }

                if (sum1 > sum2) sum1 = sum2;
                sum2 = 0;

            }

            int result = sum1;
            return result;

        }
    }
}