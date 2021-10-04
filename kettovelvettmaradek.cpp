#include <iostream>

using namespace std;

int main(){
    int number;
    
while (cin >> number){

        
        if( -1 == number )
        break;
        
        cout << number % 2 << endl;
    }

    return 0;
}
