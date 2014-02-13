#include "Package.h"


Package::Package(void)
{
	weight =0;
	costPerOz=0;
}

double Package::getWeight()
{
	return weight;	
}
double Package::getCostPerOz()
{
	return costPerOz;
}
void Package::setWeight(double w)
{
	weight = w;
}
void Package::setCostPerOz(double c)
{
	costPerOz = c;
}

Package::~Package(void)
{
}
