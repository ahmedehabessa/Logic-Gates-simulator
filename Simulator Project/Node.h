#ifndef NOOD_H
#define NOOD_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
	string Name;
	short Value;
public:
	Node();
	Node(string);
	Node(string, short);
	void Setvalue(short);
	short GetValue();
	void SetName(string N);
	string GetName();
	void PrintNode();
};

#endif // !NOOD_H