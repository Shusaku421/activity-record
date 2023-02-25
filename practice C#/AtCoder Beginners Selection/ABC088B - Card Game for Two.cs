/*
N 枚のカードがあります. i 枚目のカードには, ai という数が書かれています.
Alice と Bob は, これらのカードを使ってゲームを行います. 
ゲームでは, Alice と Bob が交互に 1 枚ずつカードを取っていきます. 
Alice が先にカードを取ります.
2 人がすべてのカードを取ったときゲームは終了し, 取ったカードの数の合計がその人の得点になります. 
2 人とも自分の得点を最大化するように最適な戦略を取った時, Alice は Bob より何点多く取るか求めてください.
*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
 
namespace ConsoleApp3._20220519
{
    class CGfT
    {
        static void Main()
        {
            int alice = 0, bob = 0;
            int N = int.Parse(Console.ReadLine());
            int[] ary = Console.ReadLine().Split().Select(int.Parse).ToArray();
            Array.Sort(ary);
            Array.Reverse(ary);
 
            for(int i = 0; i < N; i++)
            {
                if (i % 2 == 0)
                {
                    bob += ary[i];
                }
                else
                {
                    alice += ary[i];
                }
            }
            Console.WriteLine("{0}", bob-alice);
        }
    }
}