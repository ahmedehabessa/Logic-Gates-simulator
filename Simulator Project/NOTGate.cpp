#include "NOTGate.h"

void NOTGate::CalcOut()
{		
	if (In1->GetValue() == 1)
	{
		Out1->Setvalue(0);
	}
	else
		Out1->Setvalue(1);
}