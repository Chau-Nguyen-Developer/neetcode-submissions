from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for index, word in enumerate(strs):
            groups[tuple(sorted(Counter(word).items()))].append(word)
            # if frozenset(Counter(word)) not in groups:
            # groups[frozenset(Counter(word))].append(word)
        nested_list = list(groups.values())
        return nested_list 
#my_dict = {}
#my_dict[frozenset(c1.items())] = "Group 1"