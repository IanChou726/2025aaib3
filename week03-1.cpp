#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout << "請輸入四個數字";
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
    cout << "現在推入了99,88結果呢?";
    a.push_back(99);
    a.push_back(88);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}
