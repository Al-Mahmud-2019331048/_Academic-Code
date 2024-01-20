import re

# re-regular expressions

pat = r"[aeiou]"
if re.match(pat, "ggabcde"):
    print("Match")
else:
    print("Mismatch")


pat = r"[a-z]"
# r"[0-1][A-Z][a-z]"   # have to maintain sequence
if re.match(pat, "ggabcde"):
    print("Match")
else:
    print("Mismatch")