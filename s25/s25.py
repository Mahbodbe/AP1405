import asyncio
import time
import datetime

# async def main(): # coroutine
#     print("Hello ...", end="", flush=True)
#     await asyncio.sleep(5)
#     print("World")

# async def main():
#     print(f"Started at {time.strftime('%X')}", flush=True)
#     await say_after(1, "hello ")
#     await say_after(2, "world\n")
#     print(f"Finished at {time.strftime('%X')}", flush=True)

# async def main():
#     task1 = asyncio.create_task(say_after(1, "hello "))
#     task2 = asyncio.create_task(say_after(2, "world\n"))
#     print(f"Started at {time.strftime('%X')}", flush=True)
#     await task1
#     await task2
#     print(f"Finished at {time.strftime('%X')}", flush=True)

# async def main():
#     print(f"Started at {time.strftime('%X')}", flush=True)
#     await asyncio.gather(say_after(1, "hello "), say_after(2, "world\n"))
#     print(f"Finished at {time.strftime('%X')}", flush=True)

# async def say_after(delay, what):
#     await asyncio.sleep(delay)
#     print(what, flush=True, end="")

# async def main():
#     loop = asyncio.get_event_loop()
#     end_time = loop.time() + 5.0 # monotonic
#     await say_after(2, "hello\n")
#     while True:
#         print(datetime.datetime.now(), flush=True)
#         if loop.time() + 1.0 > end_time:
#             break
#         await asyncio.sleep(1)
# asyncio.run(main())

# async def factorial(name,number):
#     f = 1
#     for i in range(2, number+1):
#         print(f"Task {name}: Compute factorial({i}) ...", flush=True)
#         await asyncio.sleep(5)
#         f *= i 
    
#     print(f"Task {name}: factorial({number}) = {f}", flush=True)
    
# async def main():
#     await asyncio.gather(
#         factorial("A", 3),
#         factorial("B", 4),
#         factorial("C", 5)
#     )

def blocking_io():
    print(f"Start blocking_io at {time.strftime('%X')}")
    time.sleep(5)
    print(f"finish blocking_io at {time.strftime('%X')}")

async def main():
    print(f"Started at {time.strftime('%X')}")
    # await asyncio.to_thread(blocking_io)
    await asyncio.gather(asyncio.to_thread(blocking_io), asyncio.sleep(6))
    print(f"finished at {time.strftime('%X')}")

asyncio.run(main())

