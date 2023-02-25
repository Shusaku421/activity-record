/*
あなたは、
500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。
これらの硬貨の中から何枚かを選び、合計金額をちょうど X 円にする方法は何通りありますか。
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace ConsoleApp1._20220510
{
    class Coins
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());//500円硬貨
            int B = int.Parse(Console.ReadLine());//100円硬貨
            int C = int.Parse(Console.ReadLine());//50円硬貨
            int X = int.Parse(Console.ReadLine());//合計金額(50の倍数)
            int choice = 0;//組み合わせ
 
            for(int i = 0; i <= A; i++)
            {
                for(int j = 0; j <= B; j++)
                {
                    for(int k = 0; k <= C; k++)
                    {
                        if ( (500*i) + (100*j) + (50*k) == X)
                        {
                            choice++;
                        }
                    }
                }
            }
            Console.WriteLine("{0}", choice);
        }
    }
}