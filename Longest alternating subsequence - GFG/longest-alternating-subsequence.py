#User function Template for python3

class Solution:
	def AlternatingaMaxLength(self, nums):
	    down=1;up=1
	    for i in range(1,len(nums)):
	        if(nums[i]<nums[i-1]):
	            down=up+1
	        if(nums[i]>nums[i-1]):
	            up=down+1
	            
	            #basically, increasing the length whenevr an peak is encountered
	            
	            
	    return max(down,up)
		# Code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		nums = list(map(int, input().split()))
		ob = Solution()
		ans = ob.AlternatingaMaxLength(nums)
		print(ans)

# } Driver Code Ends