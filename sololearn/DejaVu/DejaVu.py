in_str = list(str(input()))
str_len = len(in_str)

# letters set
set_letters = set(in_str)
set_len = len(set_letters)

if str_len == set_len:
    print("Unique")
else:
    print("Deja Vu")