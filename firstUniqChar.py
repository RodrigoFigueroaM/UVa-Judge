def firstUniqChar(s):
	if len(s) == 1:
		return 0
	for i in range(0, len(s)):
		if s[i] not in s[i + 1 :] and s[i] not in s.rpartition(s[i])[0]:
			return i
	return -1

if __name__ == '__main__':
	print( firstUniqChar('leetcode') ) # 0
	print( firstUniqChar('loveleetcode') ) #2
	print( firstUniqChar('') )  # -1
	print( firstUniqChar('cc') ) # -1
	print( firstUniqChar('z') ) # 0
	print( firstUniqChar('aadadaad') ) # -1
	print( firstUniqChar('dddccdbba')) # 8 