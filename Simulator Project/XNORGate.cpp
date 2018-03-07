#include "XNORGate.h"

void XNORGate::CalcOut()
{
	if (((In1->GetValue() == 0) && (In2->GetValue() == 1)) || ((In1->GetValue() == 1) && (In2->GetValue() == 0)))
	{
		Out1->Setvalue(0);
	}
	else
	{
		Out1->Setvalue(1);
	}
}
