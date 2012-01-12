/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : acropolis.cpp

* Purpose :

* Creation Date : 12-01-2012

* Last Modified : Thu 12 Jan 2012 02:52:19 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    ifstream myinputfile("acropolis.in");
    ofstream myoutfile("acropolis.out");
    int n;
    int buf;
    vector<bool> ones;
    vector<int> numbers;

    myinputfile >> n;
    ones.resize(n);
    numbers.reserve(n);

    for (int i=0;i<n;i++)
    {
        myinputfile >> buf;

        if(buf==1)
        {
            ones[i]=true;
        }
        else
        {
            ones[i]=false;
            numbers.push_back(buf);
        }
    }
    sort(numbers.begin(),numbers.end());

    vector<int>::iterator it;

    int i;
    for(it=numbers.begin(),i=0;i<n;i++)
    {
        
        if(ones[i])
        {
            myoutfile << 1 << endl;
        }
        else
        {
            myoutfile << *it << endl;
            it++;
        }
    }

    myinputfile.close();
    myoutfile.close();
    return 0;
}
