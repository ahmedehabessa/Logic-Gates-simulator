
#include "ANDGate.h"
void ANDGate::CalcOut()
{
	if (In1->GetValue() && In2->GetValue())
	{
		Out1->Setvalue(1);
	}
	else
	{
		Out1->Setvalue(0);
	}
}
