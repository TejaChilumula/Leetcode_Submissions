# Last updated: 7/2/2025, 11:51:53 PM
class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        list1 = sentence.split(' ')
        
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        a = 'maa'
        
        for i, item in enumerate(list1):
            if item[0] in vowels:
                item = item + a
            else:
                item = item[1:] + item[0] + a
            
            a += 'a'
            list1[i] = item
            
        return ' '.join(list1)
                
        