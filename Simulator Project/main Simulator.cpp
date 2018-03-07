#include "Simulator.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Simulator s;

	s.load("test.cir");
	string n;
	getline(cin, n);
	return 0;
}
//int argc , char*argv[]
//s.load(argv[1])