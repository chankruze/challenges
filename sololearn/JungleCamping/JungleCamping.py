#!/usr/bin/python

anim_voices = {
    "Grr" : "Lion",
    "Rawr" : "Tiger",
    "Ssss" : "Snake",
    "Chirp" : "Bird"
}

in_voices = str(input()).split()
out_anims = ""

for voice in in_voices:
    out_anims += " " + anim_voices[voice]

print(out_anims.strip())