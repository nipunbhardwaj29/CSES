#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum;
    sum = n*(n+1)/2;

    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }

    vector<int> v1,v2;
    for (int i = 0; i < (n-1)/4; i++)
    {
        v1.push_back(4*i + 1);
        v1.push_back(4*i + 4);
        v2.push_back(4*i + 2);
        v2.push_back(4*i + 3);
    }

    cout << "YES\n";
    cout << v1.size() <<"\n";
     for (int i : v1)
    {
        cout << i << " ";
    }

    cout << "\n";

cout << v2.size() <<"\n";
    for (int i : v2)
    {
        cout << i << " ";
    }
 cout << "\n";
   
   
}



