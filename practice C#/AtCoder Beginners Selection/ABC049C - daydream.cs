/*
英小文字からなる文字列 S が与えられます。 
Tが空文字列である状態から始め、以下の操作を好きな回数繰り返すことで S=T とすることができるか判定してください。

T の末尾に dream dreamer erase eraser のいずれかを追加する。
*/

using System;
using System.Collections.Generic;
using System.Text;
 
namespace ConsoleApp4._20220602
{
    class DayDream
    {
        static void Main()
        {
            const string dream = "dream";
            const string dreamer = "dreamer";
            const string erase = "erase";
            const string eraser = "eraser";
 
            var answer = "YES";
            var s = Console.ReadLine().AsSpan();//配列全体を指すSpan<T>の作成
 
            while (s.Length != 0)//入力された文字がある間
            {
                if (s.EndsWith(dream))//末尾がdreamと一致する場合
                {
                    s = s.Slice(0, s.Length - dream.Length);
                }
                else if (s.EndsWith(dreamer))//末尾がdreamerと一致する場合
                {
                    s = s.Slice(0, s.Length - dreamer.Length);
                }
                else if (s.EndsWith(erase))//末尾がeraseと一致する場合
                {
                    s = s.Slice(0, s.Length - erase.Length);
                }
                else if (s.EndsWith(eraser))//末尾がeraseerと一致する場合
                {
                    s = s.Slice(0, s.Length - eraser.Length);
                }
                else
                {
                    answer = "NO";
                    break;
                }
            }
 
            Console.WriteLine(answer);
 
        }
    }
}