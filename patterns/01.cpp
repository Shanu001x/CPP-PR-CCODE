#include <iostream>
using namespace std;

int main() {
    int count;
    cout<<"How many times you want to run this loop: - ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0; j < i+1; j++)
        {
            
         cout<<"+";
        }

        cout<<endl;
        
    }


            
}

