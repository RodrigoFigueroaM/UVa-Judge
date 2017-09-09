def binomialCoefficient(k):
    li = [0 for x in range(0, k )]
    li[0] = 1
    for i in range(1, k):
        for j in range(i, 0, -1):
            li[j] = li[ j ] + li[ j-1 ]
        # triangle.append(x)
    # print( triangle)
    return li

if __name__ == '__main__':
	k = 1
	while (k <= 5):
		print(binomialCoefficient(k))
		k += 1
	# binomialCoefficient(5)