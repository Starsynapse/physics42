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
    int numberOfDistances;
    double totalNumber = 0;
    string choice;
    double k = 9000000000;
    
    cout << "Number of charges: ";
    cin >> numberOfCharges;
    string *nameArray = new string[numberOfCharges];
    fillArrayString(nameArray, numberOfCharges);
    
    cout << "Now give each charge its value (Coulombs)." << endl;
    double *chargeArray = new double[numberOfCharges];
    fillArrayDouble(nameArray, chargeArray, numberOfCharges);
    
    cout << "1 = charges located on the x-axis." << endl;
    cout << "   Needed: [x coordinate of each charge]" << endl;
    cout << "2 = charges on the xy plane that have known distances between them." << endl;
    cout << "   Needed: [all distances from all charges to all other charges]" << endl;
    
    cin >> choice;
    if(choice == "1")
    {
        cout << "Now assign the location of each charge on the x-axis (x = [?])." << endl;
        double *distanceArray = new double[numberOfCharges];
        fillArrayDouble(nameArray, chargeArray, distanceArray, numberOfCharges);
        
        totalNumber = k * potentialMPC(chargeArray, distanceArray, numberOfCharges, 0);
        cout << "Electrostatic Potential Energy: ";
        cout << totalNumber << " J" << endl;
        
        delete [] distanceArray;
    }
    
    else if(choice == "2")
    {
        numberOfDistances = calculatePaths(numberOfCharges);
        
        cout << "Now specify the distance between all the charges." << endl;
        double *distanceArray = new double[numberOfDistances];
        string *fromToStringArray = new string[numberOfDistances];
        double *fromToDoubleArray = new double[numberOfDistances];
        double *fromToChargeArray = new double[numberOfDistances];
        
        
        fillArrayDoubleDistance(nameArray, 0, fromToDoubleArray, numberOfCharges, 0, fromToStringArray);
        fillArrayDoubleCharges(0, fromToStringArray, fromToChargeArray, numberOfCharges, chargeArray, 0);
        
        for(int index = 0; index < numberOfDistances; index++)
        {
            totalNumber = totalNumber + (fromToChargeArray[index] / fromToDoubleArray[index]);
        }
        
        totalNumber = totalNumber * k;
        
        cout << "Electrostatic Potential Energy: ";
        cout << totalNumber << " J" << endl;
        
        delete [] distanceArray;
        delete [] fromToStringArray;
        delete [] fromToDoubleArray;
        delete [] fromToChargeArray;
    }
    
    delete [] nameArray;
    delete [] chargeArray;
    
    return 0;
}