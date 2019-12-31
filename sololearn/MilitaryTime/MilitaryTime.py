def convert_time(time_string):

    time_suffix = time_string[-2:].upper()
    time = time_string[:-2].rstrip()

    hour = int(time.split(":")[0])
    minute = time.split(":")[1]

    if time_suffix == "PM":
        if hour == 12:
            return str(hour) + ":" + minute
        else:
            return str(hour + 12) + ":" + minute
    
    elif time_suffix == "AM":
        if hour == 12:
            return "00:" + minute
        elif hour in range(1, 10):
            return "0" + str(hour) + ":" + minute
        else:
            return str(hour) + ":" + minute

print(convert_time(input()))