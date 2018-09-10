#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    masa = float(input("podaj masę(kg)"))
    print(masa)
    wzrost = float(input("podaj wzrost(m)"))
    print(wzrost)

    c = masa / (wzrost * wzrost)
    print ("bmi:", c)

    if c < 18.5:
        print("niedowaga")
    elif c <= 24.9:
        print("norma")
    elif c >= 25:
        print("nadwaga")
    elif c >= 30:
        print("otyłość")



    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
