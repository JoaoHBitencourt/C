using System;
using System.Globalization;

internal class Program
{
    private static void Main(string[] args)
    {
        CultureInfo CI = CultureInfo.InvariantCulture;

        Double X;
        X = 2.3456;
        Console.WriteLine(X.ToString("F2", CI));
    }
}