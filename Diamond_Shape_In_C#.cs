using System;
class Diamond {
  static void Main() {
    int Height=9, Mid=Height/2;

    for(int row=0;row<Height;row++)
    {
        if(row>Mid)
        {
            for(int col=0;col<row-Mid;col++)
            {
                Console.Write(" ");
            }
            for(int col=row-Mid;col<Height-row+Mid;col++)
            {
                Console.Write("*");
            }
        }
        else
        {
            for(int col=0;col<Mid-row;col++)
            {
                Console.Write(" ");
            }
            for(int col=Mid-row;col<=Mid+row;col++)
            {
                Console.Write("*");
            }
        }
        Console.Write("\n");
    }
  }
}
