//
//  10019_Funny_Encryption_Method
//
//  Created by Rodrigo monroy on 5/22/17.
//  Copyright © 2017 RodrigoFigueroa. All rights reserved.
//

#include <iostream>
#include <sstream>

int main(int argc, const char * argv[]) {
    int N;
    std::cin >> N;
    std::cin.ignore();
    while ( N > 0)
    {
        std::string M;
        std::getline(std::cin, M);
        
        int decM, hexM;
        
        std::istringstream(M) >> std::dec >> decM;
        std::istringstream(M) >> std::hex >> hexM;
        
        int b1 = 0, b2 = 0;
        while (decM > 0)
        {
            b1+= decM % 2;
            decM = decM / 2;
        }
        while (hexM > 0)
        {
            b2 += hexM % 2 ;
            hexM = hexM / 2;
        }
        
        std::cout << b1 << ' ' << b2 << std::endl;
        N--;
    }
    return 0;
}
