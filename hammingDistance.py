def hammingDistance( x, y):
    """
    :type x: int
    :type y: int
    :rtype: int
    """
    binx = bin(x)
    biny = bin(y)
    xbits = [0 for i in range(0,32)]
    ybits = [0 for i in range(0,32)]

    bitsIndex = len(xbits) - 1
    for i in range(  len(binx) - 1, 1, -1):
        xbits[bitsIndex] = binx[i]
        bitsIndex -= 1
    
    bitsIndex = len(ybits) - 1
    for i in range( len(biny) - 1, 1, -1):
        ybits[bitsIndex] = biny[i]
        bitsIndex -= 1

    counter = 0
    for i in range(0 , len(xbits), 1):
        if int(xbits[i]) != int(ybits[i]):
            counter += 1

    print(counter)
if __name__ == '__main__':
    hammingDistance(1,4)
