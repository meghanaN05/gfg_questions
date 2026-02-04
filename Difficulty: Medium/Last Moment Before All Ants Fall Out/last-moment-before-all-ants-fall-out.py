class Solution:
    def getLastMoment(self, n, left, right):
        maxi = 0

        for i in left:
            maxi = max(maxi, i)

        for i in right:
            maxi = max(maxi, n - i)

        return maxi
