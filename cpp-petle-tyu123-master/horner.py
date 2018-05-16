#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  horner.py

def horner_it(stopien, tb, x):
    wynik = tb[0]
    for i in range(1, stopien + 1):
        wynik = wynik * x + tb[i]

    return wynik

def horner_rek(stopien, tb, x):
    if stopien == 0:
        return tb[0]
    return horner_rek(stopien - 1, tb, x) * x + tb[stopien]


def main(args):
    tb = []
    stopien = 3
    x = int(input("Podaj wartośc x: "))
    for i in range(0, 4):
        tmp = int(input("Podaj współczynniki: "))
        tb.append(tmp)

    print("Wynik: ", horner_rek(stopien, tb, x))
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
