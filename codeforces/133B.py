mp = {
    ">": 1000,
    "<": 1001,
    "+": 1010,
    "-": 1011,
    ".": 1100,
    ",": 1101,
    "[": 1110,
    "]": 1111,
}
s = input()
u = [str(mp[c]) for c in s]
print(int(''.join(u), 2)%(10**6 + 3))