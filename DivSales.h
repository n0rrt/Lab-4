#ifndef DivSales_H
#define DivSales_H
class DivSales
{
private:
	static double corpSales;
	double divSales;
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

