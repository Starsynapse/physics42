/*
 *  Author: Eduardo Zamora
 *  Program: creation_project.cpp
 *  Date created: 11 November 2016
 *  Last edited: 11 November 2016
 */

#include "creation_project_declarations.h"
#include "creation_project_definitions.cpp"

int main()
{
    int numberOfCharges;
    double totalNumber;
    
    cout << "Number of charges: ";
    cin >> numberOfCharges;
    string *nameArray = new string[numberOfCharges];
    fillArrayString(nameArray, numberOfCharges);
    
    cout << "Now give each charge its value (Coulombs)." << endl;
    double *chargeArray = new double[numberOfCharges];
    fillArrayDouble(nameArray, chargeArray, numberOfCharges);
    
    cout << "Now assign the distance of the charges from the charge labelled [" << nameArray[0];
    cout << "] in meters." << endl;
    double *distanceArray = new double[numberOfCharges];
    fillArrayDouble(nameArray, chargeArray, distanceArray, numberOfCharges);
    
    totalNumber = potentialMPC(nameArray, chargeArray, distanceArray, numberOfCharges, 0);
    cout << totalNumber << endl;
    
    delete [] nameArray;
    
    return 0;
}