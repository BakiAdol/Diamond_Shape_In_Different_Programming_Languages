#include <iostream>

int main() {
    
    int Height=9, Mid=Height/2;

    for(int row=0;row<Height;row++)
    {
        if(row>Mid)
        {
            for(int col=0;col<row-Mid;col++)
            {
                std::cout << " ";
            }
            for(int col=row-Mid;col<Height-row+Mid;col++)
            {
                std::cout << "*";
            }
        }
        else
        {
            for(int col=0;col<Mid-row;col++)
            {
                std::cout << " ";
            }
            for(int col=Mid-row;col<=Mid+row;col++)
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
