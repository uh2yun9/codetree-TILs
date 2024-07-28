class secret:
    def __init__(self, code, place, time):
        self.code = code
        self.place = place
        self.time = time

s_code, s_place, time = tuple(input().split())

s = secret(s_code, s_place, int(time))

print(f"secret code : {s.code}")
print(f"meeting point : {s.place}")
print(f"time : {s.time}")