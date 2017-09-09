#include <iostream>

int main(int argc, char const *argv[])
{
	// std::cout << "he\n";
	int x = 1, y = 4;

	int xbits[31], ybits[31];
	std::memset(xbits, 0, sizeof xbits);
	std::memset(ybits, 0, sizeof ybits);
	int i = 0;
	int counter = 0;

	while (x > 0)
    {
        xbits[i] = x % 2;
        x = x / 2;
        i++;
    }
	
	i = 0;
    while (y > 0)
    {
        ybits[i] = y % 2;
        y = y / 2;
        i++;
    }

    for(i = 0; i < 31; i++)
    	if (xbits[i] != ybits[i])
    		counter++;

  
    std::cout << counter << std::endl;
   
    return 0;
}
