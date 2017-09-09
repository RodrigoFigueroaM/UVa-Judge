#include <iostream>
void itob(int x, int xbits[])
{
    int i = 31;
    while (x > 0)
    {
        xbits[i] = x % 2;
        x = x / 2;
        i--;
    }   
}

int btoi(int xbits[])
{   
    int result = 0;
    for(int i = 31; i > -1; i++)
    {
        result += xbits[i] * 2;
    }
    return result;
}

int main(int argc, char const *argv[])
{
	int x = 0;

    int bits [32];
    std::memset(bits, 0, sizeof bits);
    itob(x, bits);
  
    for ( int i = 0 ; i < sizeof(bits)/sizeof(bits[0]); i++)
        bits[i]


    return 0;
}
