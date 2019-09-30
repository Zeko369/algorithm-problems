def revWords(s):
    return ' '.join(map(lambda x: x[::-1], s.split(' ')))

print(revWords('ehT tac ni eht tah'))
