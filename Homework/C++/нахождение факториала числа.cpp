#include <iostream>

using namespace std;

int main()
{
long long k;
long long temp = 1;
cout<<("введите число до 20 ");
cin>>k;
if(k>=0)
    {
    for(int i = 2; i < k; i++)
        {
        temp = temp * i;    
        
        }
    cout<<k*temp;
    }
else
    {
    cout<<"Факториала не существует";
    }

    return 0;
}