#!/usr/bin/python

num_of_siblings = int(input())
popsicles_left = int(input())

if popsicles_left % num_of_siblings == 0:
    print("give away")
else:
    print("eat them yourself")