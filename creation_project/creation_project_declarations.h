/*
 * Name        : creation_project_declarations.h
 * Author      : Eduardo Zamora
 * Description : Header File
 */

// Header
#ifndef LAB_H
#define LAB_H

// includes
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <sstream>
using namespace std;

// This fills the string array with the user input
void fillArrayString(string a[], int size);

// This assigns a charge value to each charge
void fillArrayDouble(string nameArray[], double chargeArray[], int size);

// This assigns a distance from the first charge to all the other charges
void fillArrayDouble(string nameArray[], double chargeArray[], double distanceArray[], int size);

// This calculates the potential energy of multiple point charges
double potentialMPC(double chargeArray[], double distanceArray[], int size, int counter);

// calculates the number of distances between a number of charges
int calculatePaths(double size);

void fillArrayDoubleDistance(string nameArray[], int currentPath, double fromToDoubleArray[], int size, int counter, string fromToStringArray[]);

void fillArrayDoubleCharges(int counter, string fromToStringArray[], double fromToChargeArray[], int size, double chargeArray[], int currentPath);

#endif