#include <iostream>
#include "string"

using namespace std;

int main() 
	{
	string gl = "aeyuoiёуеэоаыяию";
	string str;
	getline(cin, str);
	bool q;
	int count = 0;
    		for (int i = str.length(); i>=0; i--)
    		{
    		    for(int j = 0; j<=(gl.length()-1); j++)
    		        {
    		            if(gl[j] == str[i])
    		                {
    		                    count++;     
    		                }
    		        }
    		    
    		}
    		    
	cout << count << endl;
	return 0;
}