/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
 *
 * File Name : broken_timer.cpp
 *
 * * Purpose :
 *
 * * Creation Date : 12-12-2011
 *
 * * Last Modified : Mon 09 Jan 2012 09:17:35 AM EET
 *
 * * Created By : Greg Liras <gregliras@gmail.com>
 *
 * _._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream myfile("time.out");
    ifstream myinputfile("time.in");
    int h,m,s;
    char c;
    myinputfile >> h >> c >> m >> c >> s;
    s*=2;
    m*=2;
    h*=2;
    if(s>59)
    {
        s-=60;
        m++;
    }
    if(m>59)
    {
        m-=60;
        h++;
    }
    if(h<10)
        myfile << '0';
    myfile << h << ":";
    if(m<10)
        myfile << '0';
    myfile << m << ":";
    if(s<10)
        myfile << '0';
    myfile << s;
    myfile.close();


    return 0;
}

