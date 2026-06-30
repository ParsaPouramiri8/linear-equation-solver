#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "ax + b" << endl;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "\n";
    
    if (a == 0 && b == 0)
    {
        cout << "y = 0" << endl;
    }
    else if (a == 0)
    {
        cout << "y = " << b << endl;
    }
    else if (b == 0)
    {
        if (a == 0)
        {
            cout << "y = x" << endl;
        }
        else
        {
            cout << "y = " << a << 'x' << endl;
        }
    }
    else
    {
        if (a == 1)
        {
            cout << "y = x + " << b << endl;
        }
        else
        {
            cout << "y = " << a << 'x' << " + " << b << endl;
        }
    }

    cout << "x = " << -(float(b) / a);

	return 0;
}