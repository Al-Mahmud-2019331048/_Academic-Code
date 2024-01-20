# regex
import re

pattern = r"color"

# match
if (re.match(pattern, "Red is a color")):
    print("Match")
else:
    print("Not match")

# search
if (re.search(pattern, "Red is a color")):
    print("Found")
else:
    print("Not found")

# findall()
print(re.findall(pattern, "Red is a color,i love that color"))

pat = r"color"
text = "My favourite color is Red"
match = re.search(pat, text)  # returns an object

if match:
    print(match.start())  # first index return of first occurrance
    print(match.end())  # last index return of first occurance
    print(match.span())  # first and last index return of first occurance

# find and replace
# sub(pattern,replace_str,string)
# sub(pattern,replace_str,string,count=3)

pat = r"Mahmud"
txt = "I am Mahmud. Mahmud means admirable"
txt1 = re.sub(pat, "BM", txt)  # returns string
print(txt1)



# meta character
"""
.(dot)- match with any char without newline
^ - must start with these char
$ - must end of this char
* - 0 or more number of match
+ - 1 or more number of match
? - 0 or one number of match
{}-
"""
pat = r"c..o.r"
if re.match(pat, "colour"):
    print("Match")
else:
    print("MisMatch")


pat = r"^Umb..lla$"
if re.match(pat, "Umbrella"):
    print("Match")
else:
    print("MisMatch")


pat = r"U*mb"
if re.match(pat, "mbrella"):
    print("Match")
else:
    print("MisMatch")


pat = r"Umb+"
if re.match(pat, "mbrella"):
    print("Match")
else:
    print("MisMatch")


pat = r"ice(-)?cream"
if re.match(pat, "icecream"):
    print("Match")
else:
    print("MisMatch")


pat = r"a{1,3}$"
if re.match(pat, "aaaa"):
    print("Match")
else:
    print("MisMatch")