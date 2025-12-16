//week07-1a.cpp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1; i<2*n; i++){
        for (int j=1; j<2*n; j++){
            if (j>1) cout << "";
            cout << n;
        }
        cout << "²{¦b¬O²Äi¼Ó:" << i;
        cout << endl;
    }
}
