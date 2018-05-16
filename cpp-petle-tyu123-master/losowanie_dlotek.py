#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def losuj(ileliczb, maksliczb):

    liczby = []  # pusta lista

    ile = 0  # ilość unikalnych liczb

    # for i in range(ileliczb):
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1

    # print(liczby)
    return liczby

def pobierz_typy(ileliczb):

    # pobieranie typów użytkownika

    typy = set()  # pusty zbiór

    # for i in range(ileliczb):
    ile = 0
    while ile < ileliczb:
        typ = int(input("podaj typ: "))
        if typ not in typy:
            typy.add(typ)
            ile += 1

    # print(typy)
    return typy



def main(args):
    ileliczb = int(input("Ile liczb chcesz zgadywać? "))
    maksliczb = int(input("Maksymalna losowana liczba: "))

    while ileliczb > maksliczb or ileliczb < 1:
        ileliczb = int(input("Ile liczb chcesz zgadnąć z %s liczb? " % maksliczb))
        # podstawianie za %s funkcji przed którą jest znak %

    liczby = losuj(ileliczb, maksliczb)
    typy = pobierz_typy(ileliczb)

    trafione = set(liczby) & typy
    # przekształcenie listy na zbiór i wyzaczenie części wspólnej

    if len(trafione) == 1:
        print("Trafiłeś", len(trafione), "liczbę")
    elif len(trafione) == 0:
        print("Trafiłeś", len(trafione), "liczb")
    elif len(trafione) < 4:
        print("Trafiłeś", len(trafione), "liczby")
    else:
        print("Trafiłeś", len(trafione), "liczb")

    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
