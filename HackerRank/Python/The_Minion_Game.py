def minion_game(string):
    length = len(string)
    Stuart_count = 0
    Kevin_count = 0
    vowels = {'A', 'E', 'I', 'O', 'U'}

    for i in range(length):
        if string[i] in vowels:
            Kevin_count += length - i
        else:
            Stuart_count += length - i

    if Kevin_count == Stuart_count:
        print("Draw")
    elif Stuart_count > Kevin_count:
        print("Stuart", Stuart_count)
    else:
        print("Kevin", Kevin_count)
        
if __name__ == '__main__':
    s = input()
    minion_game(s)  