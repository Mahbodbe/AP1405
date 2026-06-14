import sympy as sp

# x = sp.symbols('x')
x, y = sp.symbols('x, y')

print(x**2)

a = sp.Rational(1, 2)
print(a)
a = a**2
print(a)

f = (x+y)**2
print(f)

print(f.subs(x, 1)) # change x with 1

print(sp.limit(sp.sin(x)/x, x, 0))

print(sp.diff(sp.sin(x), x))
print(sp.integrate(sp.cos(x), x))
print(sp.latex(sp.integrate(sp.cos(x), x)))

print(sp.solve(x**2 - 1))
print(sp.solve(x**3 - 1))
print(sp.solve(x**4 - 1))
print(sp.solve(x**5 - 1))
