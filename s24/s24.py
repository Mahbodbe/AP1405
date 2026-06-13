import threading
from time import sleep
import logging
logging.basicConfig(format="%(threadName)s -> %(message)s", level=logging.DEBUG)
# logging.basicConfig(format="%(threadName)s %(message)s", level=logging.DEBUG, filename="logging.log", filemode="w")
# logging.basicConfig(format="%(threadName)s %(message)s", level=logging.INFO)

# def worker():
#     print(f"{threading.current_thread().name} worker started")
#     sleep(1) 
#     print(f"{threading.current_thread().name} worker finished ")

def worker():
    logging.debug(f"worker started")
    # logging.info
    # logging.warning("")
    sleep(1)
    logging.debug(f"worker finished")

# threads = []

# for i in range(5):
#     t = threading.Thread(target=worker, name=f"Thread {i+1}")
#     threads.append(t)
#     # t.daemon = True
#     t.start()
# print(threading.current_thread().name)
# logging.debug(f"finished")

# t = [threading.Thread(target=worker, name=f"Thread {i+1}").start() for i in range(5)]
# print(t)
# [threading.Thread(target=worker, name=f"Thread {i+1}").start() for i in range(5)]

# for t in threading.enumerate():
#     # logging.debug(t.name)
#     if t is threading.current_thread():
#         continue
#     logging.debug(f"Joining {t.name}")
#     t.join()


# def worker(*args):
#     logging.debug(f"worker started")
#     sleep(args[0])
#     logging.debug(f"worker finished")


# logging.debug("Finished")
# [threading.Thread(target=worker, name=f"Thread {i+1}", args=(i+1,)).start() for i in range(5)]

# for t in threading.enumerate():
#     # logging.debug(t.name)
#     if t is threading.current_thread():
#         continue
#     logging.debug(f"Joining {t.name}")
#     t.join()

# logging.debug("Finished")

lock = threading.Lock()

class Mythread(threading.Thread):
    def __init__(self, name = None, daemon = None, args=None, kwargs=None, delay=0):
        # threading.Thread.__init__(self, name, daemon=daemon)
        super().__init__(name=name, daemon=daemon)
        self.args = args
        self.kwargs = kwargs
        self.delay = delay

    def run(self):
        logging.debug(f"started {self.args} {self.kwargs}")
        sleep(self.delay)
        logging.debug(f"finished {self.args} {self.kwargs}")

# [Mythread(name=f"Thread {i+1}", delay=i+1, args=(i, i+1), kwargs={'A':[i,i+1]}).start() for i in range(5)]
t = Mythread(name=f"Thread 1", delay=1, args=(1, 2), kwargs={'A':[1, 2]})
t.start()
t.join()


lock.acquire()
print("TEST")
lock.release()

with lock:
    print("TEST")

