#include "Clsproduct.h"
using namespace std;


int Clsproduct::totalproducts = 0;



std::string Clsproduct::Getname()
{
	return name;
}


int Clsproduct::Getid()
{
	return id;
}


double Clsproduct::Getprice()
{
	return price;
}

int Clsproduct::Gettotalproducts()
{
	return totalproducts;
}

void Clsproduct::printproductinfo()
{
	cout << "----------------------" << endl;
	cout << "Product Name : " << name << endl;
	cout << "Product ID : " << id << endl;
	cout << "Product Price : " << price << "$" << endl;
	
}