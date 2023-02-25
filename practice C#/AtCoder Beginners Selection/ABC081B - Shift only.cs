/*
黒板に N 個の正の整数 A1,...,AN が書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
黒板に書かれている整数すべてを，2 で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace ConsoleApp1._20220509
{
    class ShiftOnly
    {
        static void Main(string[] args)
        {
            int ctrl = 0, idx = 0;
            bool flg = false;
 
            int N = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split(' ');
            var A = Enumerable.Repeat(0, N).ToArray();
            for (int i = 0; i < N; i++)
            {
                A[i] = int.Parse(input[i]);
            }
 
            while (flg == false)//数列に奇数がない間繰り返す
            {
                if (A[idx] % 2 == 0)
                {
                    A[idx] /= 2;
                    idx++;
                    if (idx == N)
                    {
                        ctrl++;
                        idx = 0;
                    }
                }
                else//数列に奇数がある場合
                {
                    flg = true;//フラグを立てる
                }
            }
            Console.WriteLine("{0}", ctrl);
        }
    }
}