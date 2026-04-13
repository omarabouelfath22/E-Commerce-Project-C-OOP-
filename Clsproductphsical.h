#pragma once
#include "Clsproduct.h"
class Clsproductphsical : public Clsproduct
{
private:
	double weight;
public:
	Clsproductphsical(std::string namee, int idd, double pricee,double weightweight) : Clsproduct(namee,idd,pricee){
		weight = weightweight;
	}

	void printproductinfo() override {

		Clsproduct::printproductinfo();

		std::cout << "Product Weight :" <<weight << std::endl;
	}
};

