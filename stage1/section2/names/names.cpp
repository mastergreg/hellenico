/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : names.cpp

* Purpose :

* Creation Date : 11-01-2012

* Last Modified : Thu 12 Jan 2012 01:57:07 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>


using namespace std;

string min_str(string st)
{
    string buf=string(st);

    for (int i=0;i<st.size();i++)
    {
        rotate(st.begin(),st.begin()+1,st.end());
        if(lexicographical_compare(st.begin(),st.end(),buf.begin(),buf.end()))
            buf=string(st);
    }
    return buf;
}


int main()
{
    ifstream myinputfile("names.in");
    ofstream myoutfile("names.out");
    int n;

    myinputfile >> n;
    string current_name;
    string current_val;
    string min_name;
    string min_val;

    myinputfile >> min_name;
    min_val = min_str(min_name);
    for (int i=1;i<n;i++)
    {
        myinputfile >> current_name;
        current_val = min_str(current_name);
        if(lexicographical_compare(current_val.begin(),current_val.end(),min_val.begin(),min_val.end()))
        {
            min_name=current_name;
            min_val=current_val;
        }
    }
    myoutfile << min_name << endl;

    myinputfile.close();
    myoutfile.close();
    return 0;
}
