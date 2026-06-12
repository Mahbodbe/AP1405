# class Person:
#     pass

# class Person:
#     def __init__(self, first, last):
#         self.first = first
#         self.last = last
#     def say_hi(self):
#         print(f"{self.first} {self.last} says hi!")


class Person:
    count = 0
    def __init__(self, first, last):
        self.first = first
        self.last = last
        Person.count += 1
    def __del__(self):
        Person.count -= 1

    @classmethod
    def how_many(cls):
        print(f"{cls.count} person(s)")

    def info(self):
        print("information...")
        self.say_hi()
    def say_hi(self):
        print(f"{self.first} {self.last} says hi!")
        
class Student(Person):
    def __init__(self, first, last, num):
        super().__init__(first, last)
        self.num = num
    def say_hi(self):
        print(f"{self.first} {self.last}({self.num}) says hi!")
    def __del__(self):
        return super().__del__()

    # def __lt__(self, other):
    #     return self.num < other.num

    # def __lt__(self, other):
    #     if type(other) == type(self):
    #         return self.num < other.num
    #     if type(other) == type(100):
    #         return self.num < other
    def __lt__(self, other):
        if isinstance(other, Person): # isinstance(other, Student)
            return self.num < other.num
        if isinstance(other, int):
            return self.num < other
            

if __name__ == "__main__":
    # p = Person('Mahbod', "Bemani")
    # print(Person.count)
    # p.say_hi()

    # p = Person('Mahbod', "Bemani")
    # print(Person.count)
    # p = 0
    # print(Person.count)
    # p = Person('Mahbod', "Bemani")
    # p.how_many()
    # p = 0
    # Person.how_many()

    # p = Person('Mahbod', "Bemani")
    # s = Student('mahbod', 'bemani', 45343)
    # # s.how_many()
    # # Student.how_many()
    # s.say_hi()
    # s.info()
    # p.info()
    # p.say_hi()

    s1 =  Student('mahbod', 'bemani', 2332)
    s2 = Student('mahbod', 'bemani', 34456545)

    if s1 < s2:
        print("YES")
    if s1 < 156544:
        print("YES")