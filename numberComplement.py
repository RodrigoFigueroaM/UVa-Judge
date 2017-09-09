
def findComplement(num):
	numBin = bin(num)[2:]
	flipBin = []
	newBit = 0
	for bit in numBin:
		if int(bit) == 0:
			newBit = 1
		elif int(bit) == 1:
			newBit = 0
		flipBin.append(newBit)

	reciprocal = 0
	i = 0
	for bit in range( len(flipBin) - 1, 0, -1):
		reciprocal += flipBin[bit] * (2 ** i)
		i += 1
	return reciprocal

	

if __name__ == '__main__':
	print( findComplement(5))