//g++ chap16drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o chap16drill `fltk-config --ldflags --use-images`

#include "Lines_window.h"
#include "Graph.h"

int main()
{
	try
	{
		Lines_window ablak {Point{100,100},1000,800,"lines"};
		return gui_main();
	}
	catch(exception& e)
	{
		cerr << "error: " << e.what() << endl;
		return 1;
	}
	catch(...)
	{
		cerr << "unknown error" << endl;
		return 2;
	}
}