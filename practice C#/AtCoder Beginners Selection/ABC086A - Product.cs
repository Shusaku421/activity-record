/*正整数 a と b の積が偶数か奇数か判定*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace ConsoleApp1._20220509
{
    class Product
    {
        static void Main(string[] args)
        {
            string[] ipt = Console.ReadLine().Split(' ');
            int a = int.Parse(ipt[0]);
            int b = int.Parse(ipt[1]);
 
            if ((a * b) % 2 == 0)
            {
                Console.WriteLine("Even");
            }
            else
            {
                Console.WriteLine("Odd");
            }
        }
    }
}