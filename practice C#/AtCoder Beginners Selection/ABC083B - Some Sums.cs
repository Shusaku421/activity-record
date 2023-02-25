/*
1 以上 N 以下の整数のうち、10 進法での各桁の和が 
A 以上 B 以下であるものの総和を求めてください。
*/

using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
 
namespace ConsoleApp2._20220513
{
    class SomeSums
    {
    static void Main(string[] args)
        {
            /*Console.ReadLine() 1行読み込み*/
            /*.split(' ') スペースで文字列を分割*/
            /*.Select(int.Parse) inputをintにキャスト[コレクションの要素全てをintにキャスト]*/
            /*.ToList() 配列をリストに変換*/
            var input = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            int N = input[0];
            int A = input[1];
            int B = input[2];
 
            var r = 0;
            for(int i = 1; i <= N; i++)
            {
                var s = i.ToString().ToCharArray().Select(x => int.Parse(x.ToString())).Sum();
                if (A <= s && s <= B)
                {
                    r += i;
                }
            }
            Console.WriteLine(r);
        }
    }
}