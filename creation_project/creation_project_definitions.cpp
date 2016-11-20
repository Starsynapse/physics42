/*
 * Name        : creation_project_definitions.cpp
 * Author      : Eduardo Zamora
 * Description : 
 */

#include "creation_project_declarations.h"

void fillArrayString(string nameArray[], int size)
{
    cout << "Please give each charge a name." << endl;
    cout << "It is recommended to give each a unique name to be able to differentiate them." << endl;
    cout << "(Note: q0, q1, q2, etc. is a common naming convention.)" << endl;
    
    for(int index = 0; index < size; index++)
    {
        cout << "Unique name of charge: ";
        cin >> nameArray[index];
    }
    cout << endl;
}

void fillArrayDouble(string nameArray[], double chargeArray[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << "Charge on [" << nameArray[index] << "]: ";
        cin >> chargeArray[index];
    }
    cout << endl;
}

void fillArrayDouble(string nameArray[], double chargeArray[], double distanceArray[], int size)
{
    for(int index = 1; index < size; index++)
    {
        cout << "Name: " << nameArray[index] << endl;
        cout << "Charge: " << chargeArray[index] << endl;
        cout << "Distance from [" << nameArray[0] << "]: ";
        cin >> distanceArray[index];
    }
    cout << endl;
}

double potentialMPC(string nameArray[], double chargeArray[], double distanceArray[], int size, int counter)
{
    double productCharge = 0;
    for(int index = counter; index < size - 1; index++)
    {
        productCharge = productCharge + (chargeArray[counter] * chargeArray[index + 1]);
        cout << "sub-test: " << productCharge << endl;
    }
    cout << "test: " << productCharge << endl;
    if(counter < size - 1)
    {
        productCharge = productCharge + potentialMPC(nameArray, chargeArray, distanceArray, size, counter + 1);
    }
    
    return productCharge;
}