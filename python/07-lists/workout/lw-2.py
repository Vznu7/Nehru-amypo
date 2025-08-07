playlist1 = input().split()
playlist2 = input().split()
common = [s for s in playlist1 if s in playlist2]
for s in common:
    print(s)