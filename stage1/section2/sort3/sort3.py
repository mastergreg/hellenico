#!/usr/bin/env python2
#/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
#
#* File Name : sort3.py
#
#* Purpose :
#
#* Creation Date : 23-02-2012
#
#* Last Modified : Thu 23 Feb 2012 03:32:14 PM EET
#
#* Created By : Greg Liras <gregliras@gmail.com>
#
#_._._._._._._._._._._._._._._._._._._._._.*/

def main():
    f = open("sort3.in", "r")
    lines = int(f.readline())
    numbers = map(int, f.readlines())
    f.close()
    print lines
    for i in numbers:
        print i

if __name__=="__main__":
    main()

