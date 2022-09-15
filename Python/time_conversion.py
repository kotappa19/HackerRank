time=input()
time_list=time.split(":")
hours=int(time_list[0])
minutes=time_list[1]
seconds=time_list[2]
if hours==12 and  seconds[2]=="A":
	print("00:"+minutes+":"+seconds[:2])
elif hours==12 and seconds[2]=="P":
	print("12:"+minutes+":"+seconds[:2])
else:
	if seconds[2]=="P":
		hours+=12
		print(str(hours)+":"+minutes+":"+seconds[:2])
	elif seconds[2]=="A":
		print("0"+str(hours)+":"+minutes+":"+seconds[:2])

