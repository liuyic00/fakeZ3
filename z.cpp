#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("t.smt2");
    string s;
    while (true)
    {
        getline(cin, s);
        fout << s << endl;
        if (s == "(check-sat)")
        {
            cout << "unsat" << endl;
        }
        else if (s == "(exit)")
        {
            break;
        }
    }
    return 0;
}
