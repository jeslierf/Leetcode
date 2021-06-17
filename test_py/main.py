# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.


def foo(s):
    res = 0
    d = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    de = {'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
    for key in de:
        if s.find(key) != -1:
            print(s.find(key))
            res = res + de[key]
            print(res)
            s = s[0:s.find(key)] + s[s.find(key) + 2:]
    for ele in s:
        res = res + d[ele]
    return res


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print(foo('IV'))


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
