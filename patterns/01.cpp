#include <iostream>
using namespace std;

int main() {
    int count;
    cout<<"How many times you want to run this loop: - ";
    cin>>count;
    int incr = 1;
    for (int i = 0; i < count; i++)
    {
        
        
        for (int j = 0; j < i; j++)
        {
            
         cout<<incr << " ";
         incr = incr + 1;
        }

        cout<<endl;
        
    }


            
}

