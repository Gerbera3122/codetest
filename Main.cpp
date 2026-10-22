#include <iostream>
using namespace std;
int main()
{
    int n;
    int r;
    cout << "Input a positive number n: ";
    cin >> n;

    for (int i= 1; i<=n; i++)
    {
        r= i%3;

        cout << i;
        if (r= 1) cout << "+";
        else if (r= 2) cout << "--";
        else cout << "***";
    }
    return 0;
}