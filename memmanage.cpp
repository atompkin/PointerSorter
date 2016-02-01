#include <iostream>
#define COUNTER *((char*)p)
using namespace std;
int main()
{
	char* p = new char[256];
	COUNTER = 4;

	cout << "Enter a positive integer (0 to stop): ";
	cin >> *((int*)(p + COUNTER));

	while(*((int*)(p + COUNTER)) != 0)
	{
		COUNTER += 4;
		cout << "Enter a positive integer (0 to stop): ";
		cin >> *((int*)(p + COUNTER));
	}
	cout << "Entries (order entered): ";
	COUNTER = 4;
	while(*((int*)(p + COUNTER)) != 0)
	{
		cout << *((int*)(p + COUNTER)) << " ";
		COUNTER += 4;
	}
	cout << endl;
	cout << "Entries (sorted): ";
	for(c=0; c < (n-1); C+= 4;)
	{
		for (d = 0; d < (n-c-1);d+=4)
		{
			if(array[d] > array[d+1];
					{
						stuff;
					}
		}
	}

	cout << endl;	
}

