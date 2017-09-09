def convertToBase7(num):
	if num == 0:
		return '0'

	base7 = ''
	numCopy = - num if num < 0 else num
	while numCopy > 0:
		base7 += str(numCopy % 7)
		numCopy /= 7

	base7 = base7[::-1]
	
	if num > 0 :
		return base7
	else:
		return '-' + base7
	

if __name__ == '__main__':
	# print( intersection(5))
	print( convertToBase7(100) )
	print( convertToBase7(-7) )
	print( convertToBase7(0) )
	print( convertToBase7(7) )