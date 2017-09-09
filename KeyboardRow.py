class Solution(object):
    def findWords2(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        valid = []
        row1 = set('qwertyuiop')
        row2 = set('asdfghjkl')
        row3 = set('zxcvbnm')
        for word in words:
        	word_set = set(word.lower())
            if (word_set.intersection(row1) == word_set 
        		or word_set.intersection(row2) == word_set
        		or word_set.intersection(row3) == word_set):
        		valid.append(word)
        return valid
        			

    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        valid = []
        row1 = set('qwertyuiop')
        row2 = set('asdfghjkl')
        row3 = set('zxcvbnm')
        for word in words:
        	word_set = set(word.lower())
        	if word_set.issubset(row1):
        		valid.append(word)
        	if word_set.issubset(row2):
        		valid.append(word)
        	if word_set.issubset(row3):
        		valid.append(word)	
        return valid
        			

def main():
	s = Solution()
	print(s.findWords2(["Hello", "Alaska", "Dad", "Peace"]))

if __name__ == '__main__':
	main()