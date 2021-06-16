# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.


def foo(logs):
    letter_logs = []
    digit_logs = []
    for ele in logs:
        temp = ele.split(" ")
        if temp[1].isdigit():
            digit_logs.append(ele)
        else:
            letter_logs.append([temp[0], " ".join(temp[1:])])
    letter_logs = sorted(letter_logs)
    letter_logs = sorted(letter_logs, key=lambda x: x[1])
    return [ele[0] + " " + ele[1] for ele in letter_logs] + digit_logs


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    l = ["j mo", "5 m w", "g 07", "o 2 0", "t q h"]
    foo(l)
    res = foo(l)
    print(res)


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
