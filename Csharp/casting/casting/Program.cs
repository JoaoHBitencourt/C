using System;
using System.Globalization;

class Program
{
     static void Main(string[] args)
    {
        CultureInfo CI = CultureInfo.InvariantCulture;
        //conversao de double para int
        double a, resultado;
        int b, c, d;

        a = 5.2;
        b = (int)a;

        Console.WriteLine(b);

        //conversão de int para double
        c = 5;
        d = 2;

        resultado = (double) c / d;
        Console.WriteLine(resultado.ToString("F1", CI));
    }
}