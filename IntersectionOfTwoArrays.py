# Given two integer arrays nums1 and nums2, return an array of their intersection. 
# Each element in the result must be unique and you may return the result in any order.

def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
    ans = []
    for i in nums1:
        if i in nums2:
            ans.append(i)
    ans = set(ans)
    return ans
