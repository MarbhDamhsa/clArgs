#include <iostream>
#include <string>

using namespace std;

            
int main(int argc, char** argv)
{
	for (int i = 1; i < argc; i + 2)
	{
		string arg = argv[i];
		if(arg == "-i")
		{
			cout << "Integer: " << argv[i+1] << endl;
			i += 2;
		}
		else if (arg == "-f")
		{
			cout << "Float: " << argv[i+1] << endl;
			i += 2;
		}
		else if (arg == "-s")
		{
			cout << "String: " << argv[i+1] << endl;
			i += 2;
		}
		else if (arg == "-h")
		{
			cout << "Argument list: \n '-i (user-entered integer)': Integer";
			cout << "\n '-f (user-entered float)': Float";
			cout << "\n '-s \"(user-entered string)\"': String";
			cout << "\n '-h' : Print this menu\n\n";
			cout << "SYNTAX EXAMPLE: ./hwclarg -f 3.14 -s \"The number pi rounds to\" -i 3 \n";
			break;
		}
		else
		{
			cout << "Argument list: \n '-i (user-entered integer)': Integer";
			cout << "\n '-f (user-entered float)': Float";
			cout << "\n '-s \"(user-entered string)\"': String";
			cout << "\n '-h' : Print this menu\n\n";
			cout << "SYNTAX EXAMPLE: ./hwclarg -f 3.14 -s \"The number pi rounds to\" -i 3 \n";
			break;
		}
	}//for
	
	return 0;
}
