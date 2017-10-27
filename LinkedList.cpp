using System ;
using System.Collections.Generic;

namespace ConsoleApplication2
{
    class Program
    {
        static void PrintList<T>(LinkedList<T> ll) where T : class
        {
            LinkedListNode<T> llnode = ll.First;
            while(llnode != null)
            {
                Console.Write(llnode.Value.ToString() + " ");
                llnode = llnode.Next;
            }
            Console.WriteLine();
        }

        static void PrintListReverse<T>(LinkedList<T> ll) where T : class
        {
            LinkedListNode<T> llnode = ll.Last;
            while(llnode != null)
            {
                Console.Write(llnode.Value.ToString() + " ");
                llnode = llnode.Previous;
            }
            Console.WriteLine();
        }

        static void Main(string[] args)
        {
            LinkedList<string> ll = new LinkedList<string>();
            ll.AddLast("First");
            ll.AddLast("Second");
            ll.AddLast("Third");
            PrintList(ll);
            PrintListReverse(ll);
            Console.ReadKey();
        }
    }
}
