#pragma once
#include "Clsproduct.h"
#include<string>
class ClsDigitalProduct : public Clsproduct
{
private:
	std::string downloadlink;
public:
	ClsDigitalProduct(std::string namee, int idd, double pricee, std::string down) : Clsproduct(namee, idd, pricee) {
		downloadlink = down;
	}
	void printproductinfo() override {
		Clsproduct::printproductinfo();
		std::cout << "Product Download Link : " << downloadlink << std::endl;
	}
	friend void discountedprice(ClsDigitalProduct prod);
	
};

