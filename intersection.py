
def intersection(nums1, nums2):
	if not nums1 and not nums2 :
		return []  
	minRange = len(nums1) if len(nums1) < len(nums2) else len(nums2)

	for i in range(0, minRange - 1):
		if nums1[i] == nums2[i]:
			return nums1[i]

	

if __name__ == '__main__':
	# print( intersection(5))
	print( intersection([1, 2, 2, 1],
				[2,2]) )
	print( intersection([],
				[]) )
	print( intersection([1,1],
				[]) )