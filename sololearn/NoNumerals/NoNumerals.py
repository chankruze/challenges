# input string as splited array
in_str = str(input()).split()
# init out string
out_str = ""
# num array to convert index to number [0-10]
num_arr = ["zero", "one", "two", "three", "four", "five",
"six", "seven", "eight", "nine", "ten"]

# loop to check for int & convert if in b/w [0-10]
for word in in_str:
    if word.isdigit():
        num = int(word)
        # convert to numeral if <= 10
        if num <= 10:
            word = num_arr[num]
    # generate out string
    out_str += " " + word

# print the new string removing starting space
print(out_str.strip())