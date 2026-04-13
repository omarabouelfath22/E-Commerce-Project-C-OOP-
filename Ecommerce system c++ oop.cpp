//E-commerce system
#include <iostream>
#include <string>
#include "Clsproduct.h"
#include "Clscustomer.h"
#include "Clsproductphsical.h"
#include "ClsDigitalProduct.h"
using namespace std;
void discountedprice(ClsDigitalProduct prod) {
	cout << "Price after discount : " << prod.price - 5 << "$" << endl;
}
int main()
{


	//cllients
	Clscustomer o("Raul", 221221);
	Clscustomer p("Jessy",22222);

	//Physical product object
	Clsproductphsical ob("Monitor", 2202, 250, 5);
	

	//Digital Prouct object
	ClsDigitalProduct obob("Programming Course", 2211, 99, "Download Link");
	
	//add to cart
	o.addproducttocart(&ob);
	o.addproducttocart(&obob);
	p.addproducttocart(&ob);
	
 
	
	while (true) {
		//main menu
		cout << "Welcome To E-Commerce Project" << endl;
		cout << "For Clients enter 1, For Products enter 2 , Clear Screen press 3, To exit enter 0" << endl;
		cout << endl;
		int choice; cin >> choice;
		//cases
		switch (choice) {
		case 1: { 
			cout << endl;
			//print invoice
			cout << "-----------------------" << endl;
			o.printinvoice(); cout << "-----------------------" << endl; p.printinvoice(); cout << "-----------------------" << endl; cout << endl; break;
		}
		case 2: {
			cout << endl;
			ob.printproductinfo();
			obob.printproductinfo();
			discountedprice(obob);
			cout << "----------------------" << endl;
			cout << endl;
			break;
		}
		case 3: { system("cls"); break; }
		case 0: { cout << "------------------------------" << endl;  cout << "Thank you for using my program " << endl; cout << "------------------------------" << endl; return 0; }
		default: { cout << endl; cout << "--------" << endl;  cout << "invalid" << endl; cout << "--------" << endl; cout << endl; break; }
		}
		
	}
}