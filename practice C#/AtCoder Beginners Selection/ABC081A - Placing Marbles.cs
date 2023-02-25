/*
すぬけ君は1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 
各マスには 0 か 1 が書かれており、マス i には si が書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 
ビー玉が置かれるマスがいくつあるか求めてください。
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace ConsoleApp1._20220509
{
    class PlacingMarbles
    {
        static void Main(string[] args)
        {
            int cnt = 0;
            string s = Console.ReadLine();
            for(int i = 0; i <= 2; i++)
            {
                if (s[i] == '1')
                {
                    cnt++;
                }
            }
            Console.WriteLine("{0}", cnt);
        }
    }
}