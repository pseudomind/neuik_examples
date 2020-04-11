#include <stdio.h>
#include <NEUIK.h>


int main()
{
	NEUIK_GridLayout * gridExample = NULL;
	NEUIK_Button     * btnExample1 = NULL;
	NEUIK_Button     * btnExample2 = NULL;
	NEUIK_Button     * btnExample3 = NULL;
	NEUIK_Button     * btnExample4 = NULL;
	NEUIK_Button     * btnExample5 = NULL;
	NEUIK_Button     * btnExample6 = NULL;
	NEUIK_Button     * btnExample7 = NULL;
	NEUIK_Window     * mw = NULL;

	if(NEUIK_Init())
	{
		NEUIK_BacktraceErrors();
		return 1;
	}

	NEUIK_MakeButton(&btnExample1, "[1]");
	NEUIK_Element_Configure(btnExample1, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample2, "[2]");
	NEUIK_Element_Configure(btnExample2, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample3, "[3]");
	// NEUIK_Element_Configure(btnExample3, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample4, "[4]");
	NEUIK_Element_Configure(btnExample4, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample5, "[5]");
	NEUIK_Element_Configure(btnExample5, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample6, "[6]");
	NEUIK_Element_Configure(btnExample6, "FillAll", NULL);
	NEUIK_MakeButton(&btnExample7, "[7]");
	NEUIK_Element_Configure(btnExample7, "FillAll", NULL);

	NEUIK_MakeGridLayout(&gridExample, 3, 3);
	NEUIK_Element_Configure(gridExample, "FillAll", "PadAll=10", NULL);
	NEUIK_GridLayout_SetSpacing(gridExample, 5);
	// NEUIK_GridLayout_SetElementAt(gridExample, 0, 0, btnExample1);
	NEUIK_GridLayout_SetElementAt(gridExample, 1, 0, btnExample2);
	NEUIK_GridLayout_SetElementAt(gridExample, 2, 0, btnExample3);
	NEUIK_GridLayout_SetElementAt(gridExample, 0, 1, btnExample4);
	NEUIK_GridLayout_SetElementAt(gridExample, 1, 1, btnExample5);
	NEUIK_GridLayout_SetElementAt(gridExample, 1, 2, btnExample6);
	NEUIK_GridLayout_SetElementAt(gridExample, 2, 2, btnExample7);

	// NEUIK_NewFrame(&outerFrame);
	// NEUIK_Container_SetElement(outerFrame, gridExample);

	NEUIK_NewWindow(&mw);
	NEUIK_Window_SetTitle(mw, "GridLayout Demo");
	// NEUIK_Window_SetElement(mw, outerFrame);
	NEUIK_Window_SetElement(mw, gridExample);

	NEUIK_Window_Create(mw);

	NEUIK_EventLoop(1);
	if (NEUIK_HasErrors()) {
		NEUIK_BacktraceErrors();
	}

	NEUIK_Quit();
	return 1;
}
