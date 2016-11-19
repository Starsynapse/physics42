/*
 * Name        : creation_project_definitions.cpp
 * Author      : Eduardo Zamora
 * Description : 
 */

#include "creation_project_declarations.h"

void fillArrayString(string a[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << "Enter the number of the charge.";
        cin >> a[index];
    }
}

void fillArrayString(int a[], int size)
{
    cout << "Please give each charge a name." << endl;
    cout << "It is recommended to give each a unique name to be able to differentiate them." << endl;
    
    for (int index = 0; index < size; index++)
    {
        cout << "Unique name of charge: ";
        cin >> a[index];
    }
}