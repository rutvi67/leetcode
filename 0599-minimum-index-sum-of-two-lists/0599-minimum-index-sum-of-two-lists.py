class Solution(object):
    def findRestaurant(self, list1, list2):
        index_map = {s: i for i, s in enumerate(list1)}
        
        minn= float('inf')
        result= []
        
        for j, s in enumerate(list2):
            if s in index_map:  
                total = j + index_map[s]
                if total < minn:

            
                    minn=total
                    result = [s]  
                elif total == minn:
                    result.append(s)  
        return result
