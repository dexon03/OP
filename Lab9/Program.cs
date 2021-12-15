using System;
using System.Linq;

namespace Lab9
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string a = Console.ReadLine();
            string[] arr = a.Split(' ');
            swap(arr);
            Console.WriteLine(String.Join(" ", arr));
        }

        static void swap(string[] arr)
        {
            int ind1 = 0, ind2 = 0; // запам'ятовуєм позиції найдовшого і найкоротшого слова
            string ShortWord = arr[0],
                LongWord = arr[0];
            for (int i = 1; i < arr.Length; i++)
            {
                if (arr[i].Length > LongWord.Length)
                {
                    LongWord = arr[i];
                    ind1 = i;
                }else if (arr[i].Length < ShortWord.Length)
                {
                    ShortWord = arr[i];
                    ind2 = i;
                }
            }

            if (String.Compare(LongWord, ShortWord) == 0)
            {
                Console.WriteLine("Слова однакової довжини");
            }
            else
            {
                arr[ind1] = ShortWord;
                arr[ind2] = LongWord;
            }
        }
    }
}