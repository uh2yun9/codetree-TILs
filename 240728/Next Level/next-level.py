class user:
    def __init__(self, user_id, user_lv):
        self.user_id = user_id
        self.user_lv = user_lv

user1 = user("codetree", 10)
print(f"user {user1.user_id} lv {user1.user_lv}")

user2_id, user2_lv = tuple(input().split())
user2 = user(user2_id, user2_lv)
print(f"user {user2.user_id} lv {user2.user_lv}")