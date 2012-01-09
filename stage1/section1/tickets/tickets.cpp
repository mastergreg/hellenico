/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : tickets.cpp

* Purpose :

* Creation Date : 09-01-2012

* Last Modified : Mon 09 Jan 2012 10:28:20 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/



#include <fstream>
#include <ostream>
#include <istream>
#include <cstdlib>

using namespace std;


int main()
{
    ifstream inpfile("tickets.in");
    ofstream outfile("tickets.out");
    int N,A,B,C,D;
    int ZX,AX,BX,CX,DX;

    inpfile >> N >> A >> B >> C >> D;

    ZX=10*N;
    AX=max(N,A)*9;
    BX=max(N,B)*8;
    CX=max(N,C)*7;
    DX=max(N,D)*5;

    outfile << min(ZX,min(AX,min(BX,min(CX,DX)))) << endl;

    return 0;
}
