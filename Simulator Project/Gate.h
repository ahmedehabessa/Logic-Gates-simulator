#ifndef GATE_H
#define GATE_H

#include "Node.h"
class Gate
{
protected:
	Node* In1;
	Node* In2;
	Node* Out1;
public:
	Gate();
	void SetIn1(Node*);
	void SetIn2(Node*);
	void SetOut1(Node*);
	Node* GetOut1();
	Node* GetIn1();
	Node* GetIn2();
	virtual void CalcOut() = 0;

};
#endif 
