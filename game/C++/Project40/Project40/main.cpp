#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Sales_data.h"

using namespace std;

int main(int argc, char* argv[])
{
	ifstream ifs(argv[1]);
	ofstream ofs(argv[2], ofstream::app);

	Sales_data total;
	if ( ifs >> total )
	{
		Sales_data buffer;
		while ( ifs >> buffer )
		{
			if ( total.isbn() == buffer.isbn() )
			{
				total += buffer;
			}
			else
			{
				ofs << total << endl;
				total = buffer;
			}
		}
		ofs << total << endl;
	}
	else
	{
		cout << "Error" << endl;
		return -1;
	}

	
	return 0;
}