//
//  Uva vol 100 - 10055	Hashmat the Brave Warrior
//
//
//  Created by Rodrigo monroy on 2/10/17.
//  Copyright © 2017 RodrigoFigueroa. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[])
{
    unsigned long long int  HashmatsArmy = 0;
    unsigned long long int enemyArmy = 0;
    
    while(std::cin >> HashmatsArmy >> enemyArmy)
    {
        
        unsigned int long long difference =   HashmatsArmy - enemyArmy;
        if(enemyArmy >HashmatsArmy)
        {
            difference *= -1;
        }
        std::cout<< difference<<std::endl;
    }

    return 0;
}
