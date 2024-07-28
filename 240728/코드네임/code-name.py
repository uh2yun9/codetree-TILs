class spy:
    def __init__(self, name, score):
        self.name = name
        self.score = score

list = []
for _ in range(5):
    name, score = tuple(input().split())
    list.append(spy(name, int(score)))

min = 0
for i in range(1, 5):
    if (list[min].score > list[i].score):
        min = i

print(list[min].name, list[min].score)