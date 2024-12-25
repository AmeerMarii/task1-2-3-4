#include<iostream>
using namespace std;
#include<string>
int main()
{

  string b ;
  getline(cin,b);

  for (int i = 0; i < b.size(); i++)
  {
    if (b[i] == '\\')
    {
        for (int j = 0; j < i; j++)
        {
            cout<<b[j];
        }
        
    }
    
  }
  
}
