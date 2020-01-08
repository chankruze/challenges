# US date (input)
us_date = str(input())

# input case 1 (11/19/2019)
if len(us_date) <= 10:
    us_date = us_date.split('/')
# input case 2 (November 19, 2019)
else:
    us_date = us_date.split()
    us_date[1] = us_date[1].split(',')[0]

# date
date = us_date[1]

# month
if len(us_date[0]) > 2:
    # months array
    months = ["NULL", "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
    month = str(months.index(us_date[0]))
else:
    month = us_date[0]

# year 
year = us_date[2]

# EU Date
print(date + "/" + month + "/" + year)