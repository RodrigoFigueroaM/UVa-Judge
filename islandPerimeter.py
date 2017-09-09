class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        perimeter = 0
        for row in range (0, len(grid)):
        	for val in range(0, len(grid[row])):
        		if grid[row][val] == 1:
        			SQUARE_PERIMETER = 4
        			if val > 0:
        				try:
        					left = grid[row][val - 1]
        					if left == 1:
        						SQUARE_PERIMETER -= 1
        				except: 
        					pass
        			if val < len(grid[row]):
        				try:
        					right = grid[row][val + 1]
        					if right == 1:
        						SQUARE_PERIMETER -= 1
        				except:
        					pass
        			if row > 0:
        				try:
        					top = grid[row - 1][val]
        					if top == 1:
        						SQUARE_PERIMETER -= 1
        				except:
        					pass
        			if row < len(grid) - 1:
        				try:
        					bottom = grid[row + 1][val]
        					if bottom == 1:
        						SQUARE_PERIMETER -= 1
        				except:
        					pass
        			perimeter += SQUARE_PERIMETER
       	return perimeter

        
        
if __name__ == '__main__':
	sol = Solution()
	# print (sol.islandPerimeter([[0,1,0,0],
	# 							[1,1,1,0],
	# 							[0,1,0,0],
	# 							[1,1,0,0]]) )
	print (sol.islandPerimeter([[1]]))