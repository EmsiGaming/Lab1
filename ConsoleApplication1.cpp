
#include <iostream>
void main()
{
	using namespace std::string;
        using namespace std::cin;
        using namespace std::cout;
	string name;
	cout << "Enter your name!\n";
	std::getline(cin >> std::ws, name);
	cout << "Your name is " << name + "!";
}
