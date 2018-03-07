#include "NANDGate.h"


void NANDGate::CalcOut()
{
	if ((In1->GetValue()==1) && (In2->GetValue()==1))
	{
		Out1->Setvalue(0);
	}
	else
	{
		Out1->Setvalue(1);
	}
}