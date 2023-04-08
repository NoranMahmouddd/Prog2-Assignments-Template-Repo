
#include <iostream>
#include <string>
using namespace std;
int main()
{
//Noran Mahmoud 
//202206038
	float c, v;
	cin >> c >> v;
	if (c > 0 && v > 0)cout << "Q1";
	else if (c < 0 && v>0)cout << "Q2";
	else if (c < 0 && v < 0)cout << "Q3";
	else if (c > 0 && v < 0)cout << "Q4";
	else if (c == 0 && v == 0)cout << "Origem";
	else if (c == 0 && v)cout << "Eixo Y";
	else if (c && v == 0)cout << "Eixo X";
 
	return 0;
}
