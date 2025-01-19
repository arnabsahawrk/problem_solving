dic = {}
scores = []

if __name__ == '__main__':
    for _ in range(int(input())):
        name = input()
        score = float(input())
        if score in dic:
            dic[score].append(name)
        else:
            dic[score] = [name]
        if score not in scores:
            scores.append(score)
    
    scores.sort()
    second_min = scores[1]
    
    dic[second_min].sort()
    
    for name in dic[second_min]:
        print(name)