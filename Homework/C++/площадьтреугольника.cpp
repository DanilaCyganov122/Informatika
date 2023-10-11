#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
float a,b,c,p,s,k;
cin>>a>>b>>c;

p = (a+b+c)/2;
k =p*(p-a)*(p-b)*(p-c);
s = sqrt(p*(p-a)*(p-b)*(p-c));
if (k<0)
{
   cout<<"Треугольника с такими сторонами не существует";
}
else
{
    cout<<s;
    
}
    
return 0;
}
