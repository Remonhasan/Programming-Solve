/* Author: Remon Hasan
   Problem: 148A
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
	int k, l, m, n, d;
    int cont = 0;
    
    cin >> k >> l >> m >> n >> d;
    cont = d;
    
    if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
    }
    else
    {
        for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                cont--;
        }
        cout << cont << endl;
    }
    return 0;
	
}