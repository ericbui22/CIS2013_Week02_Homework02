#include <iostream>

using namespace std;

int main()
{
	int b = 99 ;
	while (b > 1)
	{
		cout << b << "bottles of beer on the wall, "
			<< b << " bottles of beer." << endl;

		b--;

		cout << "Take one down and pass it around, "
			<< b << "\nbottles of beer on the wall." << endl;

		
	}
	cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl
		<< "Take one down and pass it around, no more bottles of beer on the wall.\n" << endl
		<< "No more bottles of beer on the wall, no more bottles of beer." << endl
		<< "Go to the store and buy some more, 99 bottles of beer on the wall.";

	return 0;
}