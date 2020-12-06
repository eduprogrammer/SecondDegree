#include "sec_degree.h"
#include <cmath>

using namespace std;

double SecondDegree::getDelta()
{
	delta = pow(bI, 2) - (4 * aI * cI);
	delta = sqrt(delta);
	return delta;
}

double SecondDegree::getRootOne()
{
	register double temp = bI * -1;
	register double rOne = ((temp) + getDelta()) / (2 * aI);
	return rOne;
}

double SecondDegree::getRootTwo()
{
	register double temp = bI * -1;
	register double rTwo = ((temp) - getDelta()) / (2 * aI);
	return rTwo;
}

double SecondDegree::rootsMultiplied()
{
	double res = cI / aI;
	return res;
}

double SecondDegree::sumOfRoots()
{
	double res = (bI*=-1) / aI;
	return res;
}