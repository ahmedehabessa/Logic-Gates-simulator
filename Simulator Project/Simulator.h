#ifndef SIMULATOR
#define SIMILATOR
#include "Gate.h"
#include "ANDGate.h"
#include "ORGate.h"
#include "NANDGate.h"
#include "NORGate.h"
#include "NOTGate.h"
#include "XNORGate.h"
#include "XORGate.h"
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Simulator
{
	vector <Gate*> GA;
	vector <Node*> NA;
	

public:
	Simulator();
	~Simulator();

	int GetGS();
	int GetNS();
	Node* FindNode(string N);
	Node* AddNode(string N);
	Node* FindorAdd(string N);
	Gate* AddGate(string Type);
	void Sim();
	void load(string FileName);
	void PrintAllNodes();
};

#endif