# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.


def foo(s):
    s = s.lower()
    i = 0
    j = len(s) - 1
    while i <= j:
        while i + 1 <= j and not s[i].isalnum():
            i += 1
        while i <= j - 1 and not s[j].isalnum():
            j -= 1
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1
    return True


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print(foo(","))


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
