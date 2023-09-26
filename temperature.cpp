#include <iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter a temperature: ";
    cin>> temp; 

    double celsius = temp * 1.8 +32; 
    double fahrenheit = temp -32 / 1.8; 

    cout << temp << " degrees Celsius is " << celsius << " degrees Fahrenheit" <<endl;
    cout << temp << " degrees Fahrenheit is " << fahrenheit << " degrees Celsius";
    return 0; 
}