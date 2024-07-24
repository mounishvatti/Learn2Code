# thread: a flow of execution that runs concurrently with other threads

import threading
import time

def eat_breakfast():
    time.sleep(3)
    print("eat breakfast done")

def study():
    time.sleep(4)
    print("study done")

def sleep():
    time.sleep(2)
    print("sleep done")


# eat_breakfast()
# study()
# sleep()

thread1 = threading.Thread(target=eat_breakfast)
thread1.start()
thread2 = threading.Thread(target=study)
thread2.start()
thread3 = threading.Thread(target=sleep)
thread3.start()

thread1.join()
thread2.join()
thread3.join()

print(threading.active_count())
print(threading.enumerate())
print(time.perf_counter())


