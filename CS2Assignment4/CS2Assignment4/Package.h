#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <string>

using namespace std;

//Base Class
class Package
{
	//Shared with derived classes
	protected:
	double weight;
	double costPerOz;

public:
	Package(void);
	double getWeight();
	double getCostPerOz();
	void setWeight(double);
	void setCostPerOz(double);
	~Package(void);
};
#endif

