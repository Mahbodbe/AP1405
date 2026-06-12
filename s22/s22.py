# from lib import Person

# p = Person()

# print(p)


# l = ['a', 'b', 'c']
# print(''.join(l))
from time import time
import random
# print(random.choice("AGCT"))

# print([random.choice("AGCT") for _ in range(10)])

# f = open("dna.txt", "w")

# f.write("".join([random.choice("AGCT") for _ in range(100000000)]))

f = open("dna.txt", "r")

dna = f.read()

# print(len(dna))

num = 0
start = time()
for seq in dna:
    if seq == "A":
        num += 1
end = time()
print(f"A -> {num} - Took: {((end-start)*1000):.0f}ms")
