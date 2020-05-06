# Author: b1tank
# Email: b1tank@outlook.com
#=================================

'''
__ on LeetCode

Solution: 
    - __
'''


class Solution():
    def ____(self, __):
        """
        :type __: __
        :rtype: __
        """

        # Beginning of walkthrough ==============================

        # End of walkthrough ====================================

        return __
        

def main():

    s = Solution()

    inputs = [[__],
              [__],
              [__],
              [__],
              [__],
              [__]]
                
    answers = [__]
    test_res = []
    for inp, ans in zip(inputs, answers):
        oup = s.__(inp)
        print(oup)
        print(ans)
        print(oup == ans)
        test_res.append(oup == ans)

    if all(tr for tr in test_res):
        print('All tests passed!')
    else:
        print('Some tests failed!')

if __name__ == '__main__':
    main()
