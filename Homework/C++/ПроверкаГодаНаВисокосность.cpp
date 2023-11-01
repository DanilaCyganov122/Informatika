
#include <iostream>

using namespace std;

int main()
{
    int y;
    cout<<"введите год ";
    cin>>y;
    if(y%4 == 0)
        {
            cout << "год високосный";
        }
    else
        {
            cout <<"год невисокосный";
        }

    return 0;
}