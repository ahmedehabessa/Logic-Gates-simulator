#include "Gate.h"
#include"Node.h"

Gate::Gate()
{
	In1 = NULL;
	In2 = NULL;
	Out1 = NULL;
}

void Gate::SetIn1(Node* N)
{
	In1 = N;
}

void Gate::SetIn2(Node* N)
{
	In2 = N;
}void Gate::SetOut1(Node* N)
{
	
	Out1 = N;
}
Node* Gate::GetIn1()
{
	return In1;
}
Node* Gate::GetIn2()
{
	return In2;
}Node* Gate::GetOut1()
{
	return Out1;
}
