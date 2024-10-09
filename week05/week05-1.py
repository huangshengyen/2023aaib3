#week05-1.py soit106_advance_004
s = input()
for c in s:
	if c.islower() : c = c.upper()
	elif c.isupper() : c = c.lower()
	print( c , end = '')
print()