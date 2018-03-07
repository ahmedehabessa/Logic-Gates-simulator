#include "Node.h"
#include <string>
#include <iostream>
using namespace std;
Node::Node()
{
	Value = 0;
}
Node::Node(string N)
{
	Value = 0;
	Name = N;
}
Node::Node(string N, short V)
{
	Value = V;
	Name = N;
}
void Node::Setvalue(short V)
{
	if ((V == 1) || (V == 0))
	{
	Value = V;	
	}
	else
	{
		cout << "error loading Design (error 01)" << endl << "Please refere to user Guide" << endl;
		Value = 2; //error 
	}
}
short Node::GetValue()
{
	return Value;
}
void Node::SetName(string N)
{
	Name = N;
}
string Node::GetName()
{
	return Name;
}

void Node::PrintNode()
{
	cout << this->Name << " " << this->Value << endl;
}
