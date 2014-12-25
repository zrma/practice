#!/usr/bin/python

import glob
sources = glob.glob("*.m");
targets = map(lambda x: x.split('.')[0], sources)

print "CFLAGS=-framework Foundation\n"
print "all:", 
for i in targets:
	print i,

print ""
for i in targets:
	target = i + ": " + i + ".m"
	print target
	print "\tgcc $(CFLAGS) -o $@ $^"

print "clean:\n\trm -f *.o",
for i in sources:
	print i.split('.')[0],


