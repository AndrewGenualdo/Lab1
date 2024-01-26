/*
 * Author: Drew Genualdo
 * Class: CSI-240-04
 * Assignment: Lab 1
 * Date Assigned: Unknown
 * Due Date: Jan 30, 2024 @ 1pm
 *
 * Description:
 * Applies various functionality to a 2d array that is populated with random numbers from 0-100
 *
 * Certification of Authenticity:
 * I certify that this is entirely my own work, except where I have given
 * fully-documented references to the work of others. I understand the definition and
 * consequences of plagiarism and acknowledge that the assessor of this assignment
 * may, for the purpose of the assessing this assignment:
 * - Reproduce this assignment and provide a copy to another member of academic staff;
 * and/or
 * - Communicate a copy of this assignment to a plagiarism checking service (which may
 * then retain a copy of this assignment on its database for the purpose of future plagiarism checking)
 */

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
