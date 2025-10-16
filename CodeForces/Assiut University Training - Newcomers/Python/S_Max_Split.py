S = input()

countL = 0
countR = 0
balancedString = []
subString = ""

for i in range(len(S)):
    subString += S[i]

    if S[i] == "L":
        countL += 1
    else:
        countR += 1

    if countL == countR:
        balancedString.append(subString)
        subString = ""

print(len(balancedString))

for s in balancedString:
    print(s)
