#pragma once
#include <iostream>
#include <string>
class Clsproduct
{
	
protected:
	std::string name;
	int id;
	double price;
private:
	static int totalproducts;
public:

	//default constructor
	Clsproduct() {
		name = "default";
		id = 0;
		price = 0;
		totalproducts++;
	}

	//parameterized constructor
	Clsproduct(std::string namee, int idd, double pricee) {
		name = namee; id = idd; price = pricee; totalproducts++;
	}

	

	//setters and getters

	void Setname(std::string name2) {
		name = name2;
	}
	std::string Getname();

	void Setid(int idid) {
		id = idid;
	}
	int Getid();

	void Setprice(double priceprice){
		price = priceprice;
	}
	double Getprice();

	static int Gettotalproducts();

	//product info
	virtual void printproductinfo()=0;
};

