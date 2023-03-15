// This file converts currency

#include <iostream>
#include <cmath>

double result;
double result2;
double num1;
double num2;
char Currency;
double num3 = 1.25;

int main(){

std::cout <<"Enter currency ammount in usd: ";
std::cin >> num1;

std::cout <<"What Currency would you like to convert to? \n";
std::cout <<"($-USD, &-EUR, #-GBP, !-MXN): ";
std::cin >>Currency;

switch (Currency){
case '$':
    result = num1;
	std::cout << "USD: " << result << '\n';
	break;
    		
case '&':
    result = num1 / num3;
    result2 = num1 * result;
    std::cout << "EUR: " << result2 << '\n';
    break;
        		
case '#':

    std::cout << "MXN: " << result << '\n';
    break;

case '!':

    std::cout << "GBP: " << result << '\n';
    break;

}

return 0;
}

