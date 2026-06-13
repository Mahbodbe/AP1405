import ctypes
import os
import sys
from time import time
import numpy as np

lib_path = os.path.join(os.getcwd(), "libmath.so")
lib = ctypes.cdll.LoadLibrary(lib_path)
# print(lib)

add = lib.add
# add.argtypes = [ctypes.c_int, ctypes.c_int]
add.argtypes = [ctypes.POINTER(ctypes.c_int), ctypes.POINTER(ctypes.c_int)]
add.restype = ctypes.c_int

a, b = 2, 3
_a, _b = ctypes.c_int(a), ctypes.c_int(b)
s = add(_a, _b) 
print(a,b, s)
a, b = _a.value, _b.value
print(a,b, s)

N = 10000
forloop = lib.forloop
forloop.argtypes = [ctypes.c_size_t]
forloop.restype = ctypes.c_int 
start = time()
forloop(N)
end = time()
print(f"Took:{(end-start)*1000:.0f} ms")

cnt = 0
start = time()
for i in range(N):
    for j in range(N):
        cnt += i + j 
end = time()
print(f"Took:{(end-start)*1000:.0f} ms")

multiply = lib.multiply
multiply.argtypes=[
    np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags="C"),
    np.ctypeslib.ndpointer(dtype=np.float64, ndim=1, flags="C"),
    ctypes.c_size_t,
]
multiply.restype = ctypes.c_double

a = np.arange(1, 10, dtype=np.float64)
s = multiply(a, a, 9)
print(s)