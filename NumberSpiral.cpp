#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
            // row, column
        ll y, x;
        cin >> x >> y;
        ll ans;

        if (y>x)
        {
            if (y%2 !=0)
            {
                 // odd 
                 ans = (y*y) - x + 1;
            }
            else{
                // even
                ans = (y-1)*(y-1) + x;
            }
           
        }
        else{
                if (x%2 ==0)
            {
                 // even 
                 ans = (x*x) - y + 1;
            }
            else{
                // even
                ans = (x-1)*(x-1) + y;
            }
        }

        cout << ans << "\n";
    }
   
}



