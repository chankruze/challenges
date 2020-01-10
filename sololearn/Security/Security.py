#!/usr/bin/python

in_str = str(input())

money = in_str.index('$')
thief = in_str.index('T')
guard = 0
guards = list()

while guard < len(in_str):
  try:
    guard = in_str.index('G', guard)
    guards.append(guard)
    guard += 1
  except:
    guard = len(in_str)

if len(guards) != 0:
    quiet_count = 0
    
    for guard in guards:
        if money > thief:
            if guard in range(thief, money):
                quiet_count += 1
        else:
            if guard in range(money, thief):
                quiet_count += 1
            
    if quiet_count != 0:
        print("quiet")
    else:
        print("ALARM")

else:
    print("ALARM")
