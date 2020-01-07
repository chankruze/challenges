#!/usr/bin/python

name = input()
num_agents = int(input())
drivers = input().split()

drivers.append(name)
drivers.sort()

index = drivers.index(name) + 1

if num_agents > index:
    num_agents = index

rem = index % num_agents
div = index // num_agents

time =  (rem + div) * 20

print(time)