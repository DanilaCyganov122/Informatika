#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<<("введите число ");
    cin>>k;
    for(int i = 0; i < 10; i++)
    {
        cout<<k<<"*"<<i<<"="<<k*i<<endl;
    
    }

    return 0;
}