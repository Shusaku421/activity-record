/*
日本でよく使われる紙幣は、10000 円札、5000 円札、1000 円札です。以下、「お札」とはこれらのみを指します。
青橋くんが言うには、彼が祖父から受け取ったお年玉袋にはお札が N 枚入っていて、合計で Y 円だったそうですが嘘かもしれません。
このような状況がありうるか判定し、ありうる場合はお年玉袋の中身の候補を一つ見つけてください。
なお、彼の祖父は十分裕福であり、お年玉袋は十分大きかったものとします。
*/
using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
 
namespace ConsoleApp4._20220602
{
    class Otoshidama
    {
        static void Main()
        {
            string[] input = Console.ReadLine().Split(' ');
            int N = int.Parse(input[0]);//お札N枚で
            int Y = int.Parse(input[1]);//Y円
 
            for (var yukichi = N; yukichi >= 0; yukichi--)
            {
                for (var ichiyo = N - yukichi; ichiyo >= 0; ichiyo--)
                {
                    var hideyo = N - yukichi - ichiyo;
                    if ((10000 * yukichi) + (5000 * ichiyo) + (1000 * hideyo) == Y)
                    {
                        Console.WriteLine("{0} {1} {2}", yukichi, ichiyo, hideyo);
                        return;
                    }
                }
            }
            Console.WriteLine("-1 -1 -1");
        }
    }
}