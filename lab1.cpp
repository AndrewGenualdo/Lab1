#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int values[9][8];
    populate(values);
    cout << endl;
    display(values);
    cout << endl;
    displayMultiplesOfFive(values);
    cout << endl;
    sumAndDisplayColumns(values);
    return 0;
}
