#include <iostream>

using namespace std;

int a (){
    int c = 0;
    for(int b = 0; b < 1000000000; b++){
        c += b;
    }
    return c;
}

int main()
{
    int result  = a();
    cout << result << endl;
    return 0;
}
