#include "Simulator.h"



Simulator::Simulator()
{
}


Simulator::~Simulator()
{
	int i;
	for (i = 0; i < NA.size(); i++)
	delete NA[i] ;
	
	for (i = 0; i < GA.size(); i++)
	delete GA[i];
}


int Simulator::GetGS()
{
	return GA.size();
}


int Simulator::GetNS()
{
	return NA.size();
}


Node* Simulator::FindNode(string N)
{
	int i;
	for (i = 0; i < NA.size(); i++)
	{
		if (NA[i]->GetName() == N)
			return NA[i];
	}
		return NULL;
}

Node* Simulator::AddNode(string N)
{
	Node* p;
	p = new Node(N);
	NA.push_back(p);
	return p;
}


Node* Simulator::FindorAdd(string N)
{
	Node* p = FindNode(N);
	if (p != NULL)
		return p;
	else
		return AddNode(N);
}


Gate* Simulator::AddGate(string Type)
{
	Gate* p = NULL;

	if (Type == "AND")
		p = new ANDGate();
	else if (Type == "OR")
		p = new ORGate();
	else if (Type == "NAND")
		p = new NANDGate();
	else if (Type == "NOR")
		p = new NORGate();
	else if (Type == "NOT")
		p = new NOTGate();
	else if (Type == "XOR")
		p = new XORGate();
	else if (Type == "XNOR")
		p = new XNORGate();
	else 
	{
		cout << "error loading design (error 00) " << endl << "please refere to User Guide" << endl;

		return NULL;
	
	}
	GA.push_back(p);
	return p;
}



void Simulator::Sim()
{
	for (int i = 0; i < GA.size(); i++)
		GA[i]->CalcOut();
}


	
void Simulator::load(string FileName)
{
	ifstream f1;
	f1.open(FileName);
	while (!f1.eof())
	{
		string s;
		f1 >> s;
		if (s == "SET")
		{
			string N; short V;
			f1 >> N >> V;
			FindorAdd(N)->Setvalue(V);
		
			if(FindorAdd(N)->GetValue() ==2)
			{
				goto l1;
			}
		}
		else if (s == "OUT")
		{
			string N;
			f1 >> N;
			if (N == "ALL")
				PrintAllNodes();
			else
				FindorAdd(N)->PrintNode();


		}
		else if (s == "SIM")
			Sim();
		else 
		{
			Gate* g = AddGate(s);
			if (g == NULL) { goto l1; }
			string N1, N2, N3;
			if (s != "NOT")
			{
				f1 >> N1 >> N2 >> N3;
				g->SetIn1(FindorAdd(N1));
				g->SetIn2(FindorAdd(N2));
				g->SetOut1(FindorAdd(N3));
			}
			else 
			{
				f1 >> N1 >> N2;
				g->SetIn1(FindorAdd(N1));
				g->SetIn2(FindorAdd(N1));
				g->SetOut1(FindorAdd(N2));
			}
		}
	}
	l1:
	f1.close();
}


void Simulator::PrintAllNodes()
{
	for (int i = 0; i < NA.size(); i++)
		NA[i]->PrintNode();
}
