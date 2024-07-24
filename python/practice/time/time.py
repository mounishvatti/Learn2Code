import time

# print(time.ctime(10000000000))

# print(time.time())

time_object = time.localtime()
print(time_object)
print(time.strftime("%Y-%m-%d %H:%M:%S", time_object))

time_object = time.gmtime()
print(time_object)
print(time.strftime("%Y-%m-%d %H:%M:%S", time_object))

