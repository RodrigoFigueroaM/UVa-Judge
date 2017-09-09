class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        
        if amount < 1:
            return 0
        coins[:] = sorted(coins, key=int, reverse=True)
        minNumCoins = 0
        tempCoin = 0
        tempAmount = 0
        for coin in coins:
            tempCoin = amount // coin
            tempAmount = amount - coin * tempCoin
            if tempAmount >= 0:
                amount = tempAmount
            minNumCoins += tempCoin
        if amount > 0:
            return -1
        return minNumCoins




	    
        
if __name__ == '__main__':
    sol = Solution()
    # print(sol.coinChange(coins = [1, 2, 5], amount = 11)) #3
    # print(sol.coinChange(coins = [10, 2, 5], amount = 15)) #2
    # print(sol.coinChange(coins = [3], amount = 2)) #-1
    # print(sol.coinChange(coins = [2], amount = 3)) #-1
    # print(sol.coinChange([1], 0))# 0
    print(sol.coinChange([186,419,83,408], 6249)) # 20