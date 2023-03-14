// This file converts currency

#include <iostream>
#include <cmath>

double result;
double num1;
double num2;
char Currency;


int main(){

std::cout <<"Enter currency ammount in usd: ";
std::cin >> num1;

std::cout <<"What Currency would you like to convert to? \n";
std::cout <<"($, €, GBP, MXN): ";
std::cin >>Currency;

switch (Currency){
case '$':
    result = num1;
	std::cout << "USD: " << result << '\n';
	break;
    		
/* case 'E':
    result = num1; 
    std::cout << "EUR: " << result << '\n';
    break;
        		
 case 'M':

    std::cout << "MXN: " << result << '\n';
    break;

case 'GBP':

    std::cout << "GBP: " << result << '\n';
    break;
*/

}

return 0;
}

