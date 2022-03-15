public class Main
{
	public static void main(String[] args) {
		int Height=9, Mid=Height/2;
    
        for(int row=0;row<Height;row++)
        {
            if(row>Mid)
            {
                for(int col=0;col<row-Mid;col++)
                {
                    System.out.print(" ");
                }
                for(int col=row-Mid;col<Height-row+Mid;col++)
                {
                    System.out.print("*");
                }
            }
            else
            {
                for(int col=0;col<Mid-row;col++)
                {
                    System.out.print(" ");
                }
                for(int col=Mid-row;col<=Mid+row;col++)
                {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
	}
}
