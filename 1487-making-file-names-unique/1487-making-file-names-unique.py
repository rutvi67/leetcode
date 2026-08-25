class Solution(object):
    def getFolderNames(self, names):
        used = {}
        result = []
        
        for name in names:
            if name not in used:
                result.append(name)
                used[name] = 1
            else:
                k = used[name]
                new_name = name + "(" + str(k) + ")"
                while new_name in used:
                    k += 1
                    new_name = name + "(" + str(k) + ")"
                result.append(new_name)
                used[name] = k + 1
                used[new_name] = 1
        return result
