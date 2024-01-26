#include <iostream>
#include <ctime>
#include "header.h"

using namespace std;

/*     Pre: 2d array values must be initialized with values from 0-100 inclusive
 *    Post: None
 * Purpose: Values of 2d array will be displayed in the console
 **************************************************************************************/
void display(int values[ROWS][COLUMNS]) {
    for(int i=0;i<ROWS;i++) {
        for(int j=0;j<COLUMNS;j++) {
            cout << values[i][j] << " ";
        }
        cout << endl;
    }
}

/*     Pre: 2d array values must be initialized with values from 0-100 inclusive
 *    Post: None
 * Purpose: Values in 2d array that are multiples of 5 will be printed on a single line
 **************************************************************************************/
void displayMultiplesOfFive(int values[ROWS][COLUMNS]) {
    for(int i=0;i<ROWS;i++) {
        for(int j=0;j<COLUMNS;j++) {
            if(values[i][j] % 5 == 0) {
                cout << values[i][j] << " ";
            }
        }
    }
    cout << endl;
}

/*     Pre: 2d array values must be initialized
 *    Post: 2d array values will be populated with random numbers from 0-100 inclusive
 * Purpose: to populate the array with values from 0-100 inclusive
 **************************************************************************************/
void populate(int values[ROWS][COLUMNS]) {
    srand(time(0));
    for(int i=0;i<ROWS;i++) {
        for(int j=0;j<COLUMNS;j++) {
            values[i][j] = rand()%101;
        }
    }
}


/*     Pre: 2d array values must be initialized
 *    Post: None
 * Purpose: to display the sums of each column in 2d array on a single line
 **************************************************************************************/
void sumAndDisplayColumns(int values[ROWS][COLUMNS]) {
    for(int j=0;j<COLUMNS;j++) {
        int total = 0;
        for(int i=0;i<ROWS;i++) {
            total+=values[i][j];
        }
        cout << total << " ";
    }
    cout << endl;
}