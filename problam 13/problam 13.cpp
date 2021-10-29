#include<iostream>
using namespace std;
int main()
{
	float total_amount,numberOf_milk ;
	cout << "total_amount \n";
	cin >> total_amount;
	numberOf_milk = total_amount / 3.78;
	cout << "numberOf_milk = " << numberOf_milk << endl;
	float cost;
	cost = numberOf_milk / 0.38;
	cout << "cost  = " << cost << endl;
	int  producion_milk;
	producion_milk = numberOf_milk / 0.27;
	cout << "producion_milk = " << producion_milk << endl;
}