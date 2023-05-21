#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// /*
//  * Complete the 'compareTriplets' function below.
//  *
//  * The function is expected to return an INTEGER_ARRAY.
//  * The function accepts following parameters:
//  *  1. INTEGER_ARRAY a
//  *  2. INTEGER_ARRAY b
//  */


// int main()
// {int i=0;
// int ab=0;
// int ba=0;
// int a[i];
// int b[i];
// cin>>a[i]>>b[i];

// if(a[i]>b[i]){
//     ab=ab++;
//     i++;
// }
// else{
//     ba=ba++;
//     i++;
// }
// cout<<a<<b;
// return 0;
// }

int main()
{
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int a = 0, b = 0;
    if (a0 > b0)
        a++;
    if (a0 < b0)
        b++;
    if (a1 > b1)
        a++;
    if (a1 < b1)
        b++;
    if (a2 > b2)
        a++;
    if (a2 < b2)
        b++;
    cout<< a << " " << b;
    return 0;
}