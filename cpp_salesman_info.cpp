// 5. Write a C++ code that will input for the following: Salesman Number, Salesman Name, Unit Sold, and Unit Price. Compute and display the Total Sales ( Total Sales = Unit Sold * Unit Price ).

#include <iostream>
using namespace std;

int main() 
{
    string salesman_name, salesman_number;
    int unit_sold, unit_price, total_sales;
    
    cout << "Enter your name: ";
    cin >> salesman_name;
    cout << "Enter your number: ";
    cin >> salesman_number;
    cout << "Enter your unit sold: ";
    cin >> unit_sold;
    cout << "Enter your unit price: ";
    cin >> unit_price;
    
    total_sales = unit_sold * unit_price;
    
    cout << endl << "Salesman INFO -------------------- " << endl;
    cout << "Salesman Name    :  " << salesman_name << endl;
    cout << "Salesman Number  :  " << salesman_number << endl;
    cout << "Total Sales      :  " << total_sales << endl;

    return 0;
}
