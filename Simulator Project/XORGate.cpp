#include "XORGate.h"

void XORGate::CalcOut()
{
	if (((In1->GetValue() == 0) && (In2->GetValue() == 1)) || ((In1->GetValue() == 1) && (In2->GetValue() == 0)))
	{
		Out1->Setvalue(1);
	}
	else
	{
		Out1->Setvalue(0);
	}
}
