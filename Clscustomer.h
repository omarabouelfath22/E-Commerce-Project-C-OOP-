#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Clsproduct.h"
class Clscustomer
{
private:
	std::string customername;
	int customerid;
	std::vector<Clsproduct*> cart;

public:
	//constructor
	Clscustomer(std::string namecustomer, int idcustomer) {
		customername = namecustomer; customerid = idcustomer;
	}
	//setters and getters
	void Setcustomername(std::string namecustomername) {
		customername = namecustomername;
	}
	std::string Getcustomername();

	void Setcustomerid(int idcustomerid) {
		customerid = idcustomerid;
	}
	int Getcustomerid();
	//add product to cart
	void addproducttocart(Clsproduct* p){
		cart.push_back(p);
	}
	//print invoice
	void printinvoice();
};

