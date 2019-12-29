using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int criminals = Convert.ToInt32(Console.ReadLine());
            
            if (criminals < 5)
                Console.WriteLine("I got this!"); 
            else if (criminals < 10)
                Console.WriteLine("Help me Batman"); 
            else
                Console.WriteLine("Good Luck out there!"); 
        }
    }
}
