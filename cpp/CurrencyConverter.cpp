/* Created 3/14/23
Check README.md for change log
*/

#include <iostream>
#include <cmath>
#include "const.h"

int main(){

std::cout <<"Enter currency ammount: ";
std::cin >> num1;

std::cout <<"What Currency would you like to convert to? \n";
std::cout <<"($-USD, &-EUR, #-MXN, !-GBP, *-JPY, @-CAD): ";
std::cin >>Currency;

switch (Currency){
case '$':
    result = num1;
	std::cout << "USD: " << result << '\n';
	break;
    		
case '&':
    result = num1 * EURExchange;
    std::cout << "USD: " << result << '\n';
    break;
        		
case '#':
    result = num1 * MXNExchange;
    std::cout << "USD: " << result << '\n';
    break;

case '!':
    result = num1 * GBPExchange;
    std::cout << "USD: " << result << '\n';
    break;

case '*':
    result = num1 * JPYExchange;
    std::cout << "USD: " << result << '\n';
    break;

 case '@':
    result = num1 * CADExchange;
    std::cout << "USD: " << result << '\n';
    break;
/*    
case '':
    result = 0;
    std::cout << ": " << result << '\n';
    break;
    
case '':
    result = 0;
    std::cout << ": " << result << '\n';
    break;
*/
default:
    std::cout <<"Please pick a valid Currency. \n";
    break;
}
system("pause");
}

