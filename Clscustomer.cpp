#include "Clscustomer.h"
#include "Clsproduct.h"
using namespace std;
std::string Clscustomer::Getcustomername()
{
	return customername;
}

int Clscustomer::Getcustomerid()
{
	return customerid;
}

void Clscustomer::printinvoice()
{
	double total = 0.0;
	cout << "Customer name :" << customername << endl;
	cout << "Products :" << endl;
	for (Clsproduct *x : cart) {
		
		cout << x->Getname() << " - " << x->Getprice() << "$" << endl;
		total += x->Getprice();
	}

	cout << "Total : " << total << "$" << endl;

}


