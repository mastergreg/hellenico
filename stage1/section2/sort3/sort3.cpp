/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : sort3.cpp

* Purpose :

* Creation Date : 12-01-2012

* Last Modified : Fri 13 Jan 2012 02:15:45 AM EET

* Created By : Greg Liras <gregliras@gmail.com>

_._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

bool compare(int a, int b)
{
    if(a==1)
        return a<b;

}

int main()
{
    ifstream inputfile("sort3.in");
    ofstream outfile("sort3.out");
    int n;
    vector<int> numbers;
    vector<int> ones_in_two;
    vector<int> ones_in_three;
    int twos=0;
    int ones_out=0;
    int twos_out=0;
    int sumout;

    inputfile >> n;
    numbers.resize(n);
    ones.reserve(n);

    for(int i=0;i<n;i++)
    {
        inputfile >> numbers[i];
        if(numbers[i]==1)
            ones.push_back(i);
        if(numbers[i]==2)
            twos++;
    }
    for(int i=ones.size()-1;i>=0;i--)
    {
        if(numbers[i]!=1)
        {
            swap(numbers[i],numbers[ones[ones.size()-(++ones_out)]]);
        }

    }

    for(int i=ones.size();i<ones.size()+twos;i++)
    {
        if(numbers[i]==3)
            twos_out++;
    }
    outfile << ones_out + twos_out << endl;
    return 0;
}
