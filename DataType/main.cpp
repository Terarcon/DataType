#include<iostream>
using namespace std;

//#define LOGICAL_TYPES
//#define DATATYPES
//#define DECLARATION_AND_INITIALIZATION
//#define COFFEE
//#define CONST
void main()
{   
	setlocale(LC_ALL, "Rus");
#if defined LOGICAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << 0.00000000000001 << endl;
#endif // LOGICAL_TYPES

#ifdef DATATYPES
	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << " | " << LLONG_MAX << endl;
	cout << ULLONG_MAX << endl;

	cout << "\n-------------------\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " | " << FLT_MAX << endl;

	cout << "\n-------------------\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " | " << DBL_MAX << endl;
#endif // DATATYPES

#ifdef DECLARATION_AND_INITIALIZATION
	int price_of_coffee = 1;
	cout << price_of_coffee << endl;

	int d;
	cout << "Enter number: ";
	cin >> d;
#endif // DECLARATIOM_AND_INITIALIZATION

#ifdef COFFEE
	double priceOfCoffee;
	int numOfCups;
	double totalPrice = priceOfCoffee * numOfCups;
	cout << "¬ведите стоимость кофе: ";
	cin >> priceOfCoffee;

	cout << "¬ведите кол-во стаканов : ";
	cin >> numOfCups;

	cout << "ќбща€ стоимость: " << totalPrice << endl;
#endif // COFFEE

#ifdef CONST
	int speed = 0;
	const int MAX_SPEED = 250;

	cout << 5 << endl;
	cout << sizeof(5) << endl;
	cout << typeid(5).name() << endl;
#endif //CONST

	cout << sizeof("+") << endl;
	cout << sizeof('+') << endl;
}