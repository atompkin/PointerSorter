#include <iostream>
#define COUNTER *((unsigned char*)p)
#define COUNT *((int*)((unsigned char*)p) + 4)
#define TEMP *((int*)((unsigned char*)p) + 8)
#define VAL *((int*)((unsigned char*)p) +12)
using namespace std;
int main()
{
	char* p = new char[256];
	COUNTER = 16;

	cout << "Enter a positive integer (0 to stop): ";
	cin >> *((int*)(p + COUNTER));

	while(*((int*)(p + COUNTER)) != 0)
	{
		COUNTER += 4;
		cout << "Enter a positive integer (0 to stop): ";
		cin >> *((int*)(p + COUNTER));
	}
	cout << "Entries (order entered): ";
	COUNTER = 16;
	while(*((int*)(p + COUNTER)) != 0)
	{
		cout << *((int*)(p + COUNTER)) << " ";
		COUNTER += 4;
	}
	VAL = COUNTER-4;
	cout << endl;
	cout << "Entries (sorted): ";
	for(COUNT = 16; COUNT < VAL; COUNT+= 4)
	{
		for (COUNTER = 16; COUNTER < VAL; COUNTER += 4)
		{
			if(*((int*)(p+COUNTER)) > *((int*)(p+(COUNTER+4))))
					{
						TEMP = *((int*)(p+COUNTER));
						*((int*)(p+COUNTER)) = *((int*)(p+(COUNTER+4)));
						*((int*)(p+(COUNTER+4)))= TEMP;
					}
		}
	}
	COUNTER = 16;
	while(*((int*)(p + COUNTER)) != 0)
	{
		 cout << *((int*)(p + COUNTER)) << " ";
		 COUNTER += 4;
	}

	cout << endl;
	delete [] p;	
	return 0;
}

