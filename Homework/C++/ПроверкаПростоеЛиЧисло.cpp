#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int number;
    int is_simple = 0;
    cin>>number;
    double root =sqrt(double(number))+1;
    for(int i=2; i<(root); i++){
        if(number%i == 0){
            is_simple = 1;
            break;
            }
        }
    if (is_simple == 0){
        cout<<"Число простое";
        }
    else{
        cout<<"Число составное";
        }
    return 0;
}