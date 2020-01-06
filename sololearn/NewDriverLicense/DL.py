#!/usr/bin/python

name = input()
num_agents = int(input())
drivers = input().split()
time = 0

drivers.append(name)
drivers.sort()

index = drivers.index(name) + 1

if num_agents > index:
    num_agents = index

rem = index % num_agents
div = index // num_agents

if rem != 0:
    time =  (rem + div) * 20
else:
    time = div * 20

print(int(time))