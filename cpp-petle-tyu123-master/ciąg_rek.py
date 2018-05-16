
#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# a1 = 2
# an = an-1 * n^2+1


def ciag(n):
    if n == 1:
        return 2
    return ciag(n - 1) * ciag(n * n) + 1


def main(args):
    n = int(input('podaj wyraz ciągu: '))
    print(ciag(n))
    return 0


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
