#include<iostream>
#include<string>

using namespace std; 
int main() 
{ 
    string str;
    string strtemp;
    cout<<"введите строку: ";
    getline(cin, str);
    strtemp = str;
    int j = 0;
    for(int i = (str.length() - 1); i >= 0; i--)
    {
        str[i] = strtemp[j];
        j++;
    }
 cout<<str;
    return 0;
}