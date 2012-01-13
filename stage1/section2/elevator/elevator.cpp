/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : elevator.cpp

* Purpose :

* Creation Date : 12-01-2012

* Last Modified : Thu 12 Jan 2012 04:54:15 PM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ifstream myinputfile("elevator.in");
    ofstream myoutfile("elevator.out");

    int n;
    vector<int> input;
    int times;
    int big_m;
    int intbuf;


    myinputfile >> n;
    if(n % 2 == 1)
    {
        input.reserve(n+1);
        input.push_back(0);
    }
    for(int i=0;i<n;i++)
    {
        myinputfile >> intbuf;
        input.push_back(intbuf);
    }
    sort(input.begin(),input.end());
    times = input.size()/2;
    n = input.size();
    for(int i=0;i<times;i++)
    {
        input[i]+=input[n-i-1];
    }
    big_m=*max_element(input.begin(),input.begin()+times);

    myoutfile << times << " " << big_m << endl;





    myinputfile.close();
    myoutfile.close();
    return 0;
}


