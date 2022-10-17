#include <iostream>
using namespace std;
template <typename X>
class score
{
public:
    X a, b;
    score(){a = 0; b = 0;};
    void plus(X a, X b)
    {
        cout << a + b;
    }

    void minus(X a, X b)
    {
        cout << a - b;
    }

    void proizv(X a, X b)
    {
        cout << a * b;
    }
};

int main()
{
    int a, b, x;
    score <int> thing;
    cout << "First variable - ";
    cin >> a;
    cout << "Second variable - ";
    cin >> b;
    cout << "Select an action: " << endl << "1.Addition" << endl << "2.Subtraction" << endl << "3.Multiplication" << endl;
    cin >> x;
    switch(x)
    {
    case 1:{
        cout << "Result - " << endl;
        thing.plus(a,b);
        cout << endl;
     break;
       }
    case 2:{
         cout << "Result - " << endl;
         thing.minus(a,b);
         cout << endl;
     break;
       }
    case 3:{
        cout << "Result - ";
        thing.proizv(a,b);
        cout << endl;
     break;
       }
    if (x > 3 || x < 1)
        cout << "After all, it is written that there are only 3 operations, do not break the program, please" << endl;
}
    return 0;
}
