#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main ()
{
	float x,y;
	clock_t time_req;

	// Using pow function
	time_req = clock();
	for(int i=0; i<100000; i++)
	{
		y = log(pow(i,5));
	}
	time_req = clock() - time_req;
	cout << "Using pow function, it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
	
	// Without pow function
	time_req = clock();
	for(int i=0; i<100000; i++)
	{
		y = log(i*i*i*i*i);
	}
	time_req = clock()- time_req;
	cout << "Without using pow function, it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
}
