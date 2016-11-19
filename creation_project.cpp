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
    
    cout << "Size of array?";
    cin >> numberOfCharges;
    
    string *a = new string[numberOfCharges];
    
    fillArrayString(a, numberOfCharges);
    
    
    
    delete [] a;
    
    return 0;
}