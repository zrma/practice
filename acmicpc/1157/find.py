ws=raw_input()
ws = ws.upper()
r ={}
for w in ws:
	if w in r:
		r[w] = r[w] + 1;
	else:
		r[w] = 1

sr = sorted(r.items(),key=r.get, reverse=True)
print sr

if len(sr) == 1:
	print sr[0][0]
elif sr[0][0] == sr[1][1]:
	print "?"
else:
	print sr[0][0]
