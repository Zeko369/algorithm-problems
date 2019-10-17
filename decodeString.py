# 2[a2[b]c] -> abbcabbc

s = '2[a2[b]c]'
q = []

def nIndex(lastI):
    for j in range(lastI, -1, -1):
        if s[j] > '9' or s[j] < '0':
            return j
            break
    return -1

print(s)
while '[' in s:
    for i in range(len(s)):
        if s[i] == '[':
            q.append(i)
        elif s[i] == ']':
            lastI = q.pop()

            curr = s[lastI+1:i]
            index = nIndex(lastI)-1
            n = int(s[index:lastI])

            tmp = s[:index] + n * curr + s[i+1:]
            s = tmp
            break

print(s)
