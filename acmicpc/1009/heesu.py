n = input()

for dummy in range(n):
	cmd = raw_input().split(" ")
	a = int(cmd[0]) % 10
	b = int(cmd[1])

# store for result loop
	result = [0] * 10
	result[0] = a


# answer always makes loop pattern.
# for example, if a = 3 --> 3, 6, 9, 2, 5, 8, 1, 4, 7, 0, 3, ...
# Also, maximum loop size is 10 
	i = 0
	while result[i] * a % 10 != result[0]:
		result[i+1] = result[i] * a % 10
		i += 1

# now we find all patterns
# total num of cases are i + 1
# b = 1 then answer is a[0] 
# b = 2 then answer is a[1]
# b = n then answer is a[j], where j = (b - 1) % (i +1)

	idx = (b - 1) % (i +1);
	answer = result[idx]
	if answer == 0: 
		answer = 10
	print answer;
