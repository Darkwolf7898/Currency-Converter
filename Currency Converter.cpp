/* Created 3/14/23
plan on adding more to it soon.
plan on updates so its accurate.*/

#include <iostream>
#include <cmath>

double result;
double num1;
char Currency;
double EURExchange = 1.0756;
double MXNExchange = 0.0537;
double GBPExchange = 1.2174;
double JPYExchange = 0.0075;

int main(){

std::cout <<"Enter currency ammount in usd: ";
std::cin >> num1;

std::cout <<"What Currency would you like to convert to? \n";
std::cout <<"($-USD, &-EUR, #-MXN, !-GBP, *-JPY): ";
std::cin >>Currency;

switch (Currency){
case '$':
    result = num1;
	std::cout << "USD: " << result << '\n';
	break;
    		
case '&':
    result = num1 * EURExchange;
    std::cout << "EUR: " << result << '\n';
    break;
        		
case '#':
    result = num1 * MXNExchange;
    std::cout << "MXN: " << result << '\n';
    break;

case '!':
    result = num1 * GBPExchange;
    std::cout << "GBP: " << result << '\n';
    break;

case '*':
    result = num1 * JPYExchange;
    std::cout << "JPY: " << result << '\n';
    break;
}

return 0;
}

