//salvare codice su un file formato txt
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
ifstream input("test.txt");
if (input.is_open())
{
ofstream output("test-out.txt", ios_base::out | ios_base::trunc);
cout << "o";
if (output.is_open())
{
string line;
int row = 0;
while (getline(input, line) && output.good())
{
output << "#" << right << setw(5) << setfill('0') << row++
<< "\t" << line << "\n";
}
output.close();
}
input.close();
}
return 0;
}
