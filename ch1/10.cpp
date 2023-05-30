#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    for (Sales_item transaction; cin >> transaction;) {
        cout << "\n" << "The result of your transaction (isbn, amount, sum, average) is: " << transaction << endl;
    }
}