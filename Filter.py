Grades = ['A', 'B', 'F', 'E', 'F']

def Filter_Grades(grade):
    return grade != 'F'

print(list(filter(Filter_Grades, Grades)))