#!/usr/bin/python

import collections

defaultdict = collections.defaultdict

"""
High Card: Highest value card (from 2 to Ace).

One Pair: Two cards of the same value.

Two Pairs: Two different pairs.

Three of a Kind: Three cards of the same value.

Straight: All cards are consecutive values.

Flush: All cards of the same suit.

Full House: Three of a kind and a pair.

Four of a Kind: Four cards of the same value.

Straight Flush: All cards are consecutive values of same suit.

Royal Flush: 10, Jack, Queen, King, Ace, in same suit.

results:
JS 2H JC AC 2D -> Two Pairs
KC 8C KS KD 8D -> Full House
5C 2C KC AC 7C -> Flush

moral from analysis: match value first then check for suite
"""
# suites = "HDCS"

hand = str(input()).split()

i = 0
for card in hand:
    suite = card[-1]
    value = card[0:len(card) - 1]

    if value == "10":
        hand[i] = 'T' + suite

    i += 1

# suite_hit = {
#     'H' : 0,
#     'D' : 0,
#     'C' : 0,
#     'S' : 0
# }

# value_hit = {
#     '2' : 0,
#     '3' : 0,
#     '4' : 0,
#     '5' : 0,
#     '6' : 0,
#     '7' : 0,
#     '8' : 0,
#     '9' : 0,
#     '10' : 0,
#     'J' : 0,
#     'Q' : 0,
#     'K' : 0,
#     'A' : 0
# }

# for card in hand:
#     suite = card[-1]
#     value = card[0:len(card) - 1]

#     if suite in suite_hit:
#         suite_hit[suite] += 1

#     if value in value_hit:
#         value_hit[value] += 1



# print(value_hit)
# print(suite_hit)

# class Card:
#     def __init__(self, value, suite):
#         self.value = value
#         self.suite = suite

#     def __str__(self):
#         return value + suite

# hand = list()

# i = 0
# for card in str(input()).split():
#     suite = card[-1]
#     value = card[0:len(card) - 1]
#     name = "card" + str(i)

#     name = Card(value, suite)
#     hand.append(name)
#     i += 1


# for

card_order_dict = {"2":2, "3":3, "4":4, "5":5, "6":6, "7":7, "8":8, "9":9, "T":10,"J":11, "Q":12, "K":13, "A":14}

def check_royal_flush(hand):
    values = [card[0] for card in hand]
    print(values)
    count = 0

    for value in values:
        if value in "10JQKA":
            count += 1

    if check_flush(hand) and count == 4:
        return True
    else:
        return False

def check_straight_flush(hand):
    if check_flush(hand) and check_straight(hand):
        return True
    else:
        return False

def check_four_of_a_kind(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values: 
        value_counts[v]+=1
    if sorted(value_counts.values()) == [1,4]:
        return True
    return False

def check_full_house(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values: 
        value_counts[v]+=1
    if sorted(value_counts.values()) == [2,3]:
        return True
    return False

def check_flush(hand):
    suits = [i[1] for i in hand]
    if len(set(suits))==1:
        return True
    else:
        return False

def check_straight(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values:
        value_counts[v] += 1
    rank_values = [card_order_dict[i] for i in values]
    value_range = max(rank_values) - min(rank_values)
    if len(set(value_counts.values())) == 1 and (value_range==4):
        return True
    else: 
        #check straight with low Ace
        if set(values) == set(["A", "2", "3", "4", "5"]):
            return True
        return False

def check_three_of_a_kind(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values:
        value_counts[v]+=1
    if set(value_counts.values()) == set([3,1]):
        return True
    else:
        return False

def check_two_pairs(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values:
        value_counts[v]+=1
    if sorted(value_counts.values())==[1,2,2]:
        return True
    else:
        return False

def check_one_pairs(hand):
    values = [i[0] for i in hand]
    value_counts = defaultdict(lambda:0)
    for v in values:
        value_counts[v]+=1
    if 2 in value_counts.values():
        return True
    else:
        return False

if check_royal_flush(hand):
    print("Royal Flush")
elif check_straight_flush(hand):
    print("Straight Flush")
elif check_four_of_a_kind(hand):
    print("Four of a Kind")
elif check_full_house(hand):
    print("Full House")
elif check_flush(hand):
    print("Flush")
elif check_straight(hand):
    print("Straight")
elif check_three_of_a_kind(hand):
    print("Three of a Kind")
elif check_two_pairs(hand):
    print("Two Pairs")
elif check_one_pairs(hand):
    print("One Pair")
else:
    print("High Card")
