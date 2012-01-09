/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : downloads.cpp

* Purpose :

* Creation Date : 10-01-2012

* Last Modified : Tue 10 Jan 2012 01:35:32 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <cmath>

using namespace std;
int main()
{
    ifstream myinputfile("downloads.in");
    ofstream myoutfile("downloads.out");
    int n,bitrate,sec,bandwidth,totalsize;
    float ans;
    bandwidth=0;
    totalsize=0;
    myinputfile >> n;
    for(int i=0;i<n;i++)
    {
        myinputfile >> bitrate >> sec;
        bandwidth+=bitrate;
        totalsize+=bitrate*sec;
    }
    ans = float(totalsize)/float(bandwidth);
    if(ceil(ans)-ans>ans-floor(ans))
        myoutfile << floor(ans) << endl;
    else
        myoutfile << ceil(ans) << endl;

    myoutfile.close();
    myinputfile.close();
    return 0;
}
