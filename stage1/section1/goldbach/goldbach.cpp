/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : goldbach.cpp

* Purpose :

* Creation Date : 10-01-2012

* Last Modified : Tue 10 Jan 2012 01:37:45 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;
bool is_prime(int cand,const vector<int>& pvector)
{
    for (int i=0 ; i<pvector.size() && pvector[i] <= sqrt(cand) ; i++)
    {
        if(cand % pvector[i] == 0)
            return false;
    }
    return true;
}
int main()
{
    ifstream myinputfile("goldbach.in");
    ofstream myoutfile("goldbach.out");
    int n;
    vector<int> pvec;
    myinputfile >> n;
    pvec.reserve(n);
    pvec.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime(i,pvec))
        {
            pvec.push_back(i);
        }
    }
    for(int i=0;i<pvec.size();i++)
    {
        if(is_prime(n-pvec[i],pvec))
        {
            myoutfile << pvec[i] << " " << n - pvec[i] << endl;
            break;
        }
    }
    

    myoutfile.close();
    myinputfile.close();
    return 0;
}
