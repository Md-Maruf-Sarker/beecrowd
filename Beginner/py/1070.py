# https://www.beecrowd.com.br/judge/en/problems/view/1070

n = int(input())

count = 0

while count < 6:
	if n % 2 != 0:
		print(n)
		count += 1
	n += 1
