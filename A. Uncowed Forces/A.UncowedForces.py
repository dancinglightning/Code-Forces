sub_time = input()
sub_time = sub_time.split(" ")
sub_fail = input()
sub_fail = sub_fail.split(" ")
sub_rating = [500, 1000, 1500, 2000, 2500]
rate = 0
for i in range(5):
    rate += max(sub_rating[i]*0.3, (1-(float(sub_time[i])/250))*sub_rating[i] - 50*float(sub_fail[i]))
sub_hack = input()
sub_hack = sub_hack.split(" ")
rate += 100*int(sub_hack[0]) - 50*int(sub_hack[1])
print(int(rate))