# from time import time
# import random

# # f = open("dna.txt", "w")

# # f.write("".join([random.choice("AGCT") for _ in range(10000000)]))

# f = open("dna.txt", "r")

# dna = f.read()

# # print(len(dna))

# def count_v1(seq, base):
#     """range_based for loop"""
#     num = 0
#     for b in seq:
#         if b == base:
#             num += 1
#     return num

# def count_v2(seq, base):
#     """index_base for loop"""
#     num = 0
#     for i in range(len(seq)):
#         if seq[i] == base:
#             num += 1
#     return num


# # start = time()
# # num = count_v1(dna, "A")
# # end  = time()
# # print(f"A -> {num} - Took: {((end-start)*1000):.0f}ms")


# # start = time()
# # num = count_v2(dna, "A")
# # end  = time()
# # print(f"A -> {num} - Took: {((end-start)*1000):.0f}ms")

# # d = globals()
# # print(d)

# # funcs = [count_v1, count_v2]

# # for func in funcs:
# #     start = time()
# #     num = func(dna, "A")
# #     end  = time()
# #     print(f"A -> {num} - Took: {((end-start)*1000):.0f}ms")

# def count_v3(seq, base):
#     """list comprehension"""
#     return len([b for b in seq if b == base])

# def count_v4(seq, base):
#     """list comprehension: castting bool to int"""
#     return sum([b == base for b in seq])

# def count_v5(seq, base):
#     """list comprehension: castting bool to int using generator"""
#     return sum(b == base for b in seq)

# def count_v6(seq, base):
#     """dynamic list"""
#     m = []
#     for b in seq:
#         if b == base:
#             m.append(0)
#     return len(m)

# def count_v7(seq, base):
#     """built-in function"""
#     return seq.count(base)

# funcs = []
# for key in globals().copy():
#     if key.startswith('count_v'):
#         funcs.append(globals()[key])


# for func in funcs:
#     start = time()
#     num = func(dna, "A")
#     end  = time()
#     print(f"{func.__name__}({func.__doc__}) -> {num} - Took: {((end-start)*1000):.0f}ms")

import threading
from time import sleep

def worker():
    print(f"{threading.current_thread().name} worker started")
    sleep(1) 
    print(f"{threading.current_thread().name} worker finished ")

threads = []

for i in range(5):
    t = threading.Thread(target=worker, name=f"Thread {i+1}")
    threads.append(t)
    t.start()
