#include <iostream>
#include <list>
using namespace std;


int main()
{
	list<int> a = { 1,2,3,4,5 };
	list<char> b = { 'a', 'b', 'c' , 'd' };
	for (int n : a)
	{
		cout << n << " ";
	}
	cout << endl;
	for (char i : b)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << a.front() << endl;
	cout << b.back() << endl;
	
	a.push_front(55);
	b.push_back('!');

	cout << a.front() << endl;
	cout << b.back() << endl;

	a.pop_back();
	b.pop_front();

	return 0;
}

// unique() забирає дублікати
// merge() зєднює два посортовані разом