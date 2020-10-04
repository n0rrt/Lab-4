using namespace std;
#include <iostream>
#ifndef DivSales_H
#define DivSales_H

class DivSales
{ 
private:
	static double corpSales;
	double divSales = 0; //divSales must be initialized to zero in order to work correctly, otherwise returns garbage data at the memory location that divSales is stored in


public:
	double qtrs[4];
	void setDivSales(double s)
	{
		divSales = divSales + s;
	}
	void setCorpSales(double s)
	{
		corpSales = corpSales + s;
	}
	double getDivSales() const
	{
		return divSales;
	}
	double getCorpSales() const
	{
		return corpSales;
	}
};
double DivSales::corpSales;
#endif // !DivSales

