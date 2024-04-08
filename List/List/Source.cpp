#include <iostream>
using namespace std;

enum week { Sunday, Monday};
enum seasons { Spring = 34, Summer = 4, Winter = 20};
enum class suit { Diamonds, Hearts, Clubs, Spades};
int main()
{
	week t;
	t = Monday;
	cout << t << endl;
	cout << t + 1 << endl;

	seasons s;
	s = Summer;
	cout << s << endl;

	suit hand;
	hand = Clubs;
	hand = suit::Clubs;
	int a = 123456;
	hand = a;
	hand = static_cast<suit>(a);
	a = static_cast<int>(suit::Hearts);



	return 0;
}