cmake_minimum_required(VERSION 3.16)
project(person_student_teacher_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(person_student_teacher_2023 main.cpp person.cpp person.h student.cpp student.h teacher.cpp teacher.h)
