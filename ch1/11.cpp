#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() 
{
    Sales_item sum;

    for (Sales_item item; cin >> item;) {
        sum+=item;
    }

    cout << "The result is (count, sum, average):" << sum << endl;

    return 0; 
}