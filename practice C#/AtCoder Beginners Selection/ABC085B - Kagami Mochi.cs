/*
X 段重ねの鏡餅 (X≥1) とは、X 枚の円形の餅を縦に積み重ねたものであって
どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。
例えば、直径 10、8、6 cmの餅をこの順に下から積み重ねると 
3 段重ねの鏡餅になり、餅を一枚だけ置くと 1 段重ねの鏡餅になります。

ダックスフンドのルンルンは N 枚の円形の餅を持っていて
そのうち i 枚目の餅の直径は di cmです。
これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。
*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
 
namespace ConsoleApp3._20220525
{
    class KagamiMochi
    {
        static void Main()
        {
            int cnt = 0;
            int N = int.Parse(Console.ReadLine());
            int[] d = new int[N];
            for(int i = 0; i < N; i++)
            {
                 d[i] = int.Parse(Console.ReadLine());
            }
            Array.Sort(d);
            Array.Reverse(d);
 
            for(int j = 0; j < N-1; j++)
            {
                if (d[j] > d[j + 1])
                {
                    cnt++;
                }
            }
            Console.WriteLine("{0}", cnt+1);
        }
    }
}