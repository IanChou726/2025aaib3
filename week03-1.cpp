#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout << "�п�J�|�ӼƦr";
    vector<int> a;
    int now;
    for(int i=0;i<4;i++)
    {
        cin >> now ;
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    cout << "�{�b���J�F99,88���G�O?";
    a.push_back(99);
    a.push_back(88);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}
