# def my_decorator(func):
#     def wrapper():
#         # pre-process
#         print(f"Calling {func.__name__}")
#         result = func()
#         # post-process
#         return result
#     return wrapper

# # def greet():
# #     print("Hello!")


# # decorated = my_decorator(greet)
# # decorated()

# # greet()
# # greet = my_decorator(greet)
# # greet()

# @my_decorator # greet -> my_decorator(greet)
# def greet(): 
#     print("Hello!")

# greet()

# def logged(func):
#     def wrapper(*args, **kwargs):
#         """Wrapper fucntion for func"""
#         print(f"[LOG] {func.__name__}")
#         result = func(*args, **kwargs)
#         return result
#     return wrapper

# @logged
# def add(x, y):
#     """adding two numbers"""
#     return x + y


# print(add(3, 4))

# print(add.__name__)
# print(add.__doc__)

import functools

# def logged(func):
#     """Logged docstring"""
#     @functools.wraps(func)
#     def wrapper(*args, **kwargs):
#         """Wrapper fucntion for func"""
#         print(f"[LOG] {func.__name__}")
#         result = func(*args, **kwargs)
#         return result
#     return wrapper

# @logged
# def add(x, y):
#     """adding two numbers"""
#     return x + y


# print(add(3, 4))

# print(add.__name__)
# print(add.__doc__)

def repeat(N):
    """decorator factory"""
    def decorator(func):
        @functools.wraps(func)
        def wrapper(*args, **kwargs):
            result = None
            for i in range(N):
                print(f"Run {i+1}/{N} of {func.__name__}")
                result = func(*args, **kwargs)
            return result
        return wrapper
    return decorator

@repeat(N=3)
def say_hi(name):
    print(f"{name} says hi!")

# say_hi = repeat(N=3)(say_hi)
say_hi("Mahbod")

