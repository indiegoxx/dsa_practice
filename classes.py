class SoftwareEngineer:
    def __init__(self, name, age, level, salary):
        self.name = name
        self.age = age
        self.level = level
        self.salary = salary

    def __str__(self) -> str:
        return self.name

    def entrySalary(self):
        return self.age * 500


se1 = SoftwareEngineer("max", 12, "jounier", 5000)
print(se1.entrySalary())
