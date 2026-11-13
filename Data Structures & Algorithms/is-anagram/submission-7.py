
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s, freq_t = Counter(s), Counter(t)
        return freq_s == freq_t
        