cmake_minimum_required(VERSION 3.23)
project(hw3 C)

set(CMAKE_C_STANDARD 99)

add_executable(hw3 josephus.c)
add_executable(flip flip.c)
add_executable(statistics statistics.c)
add_executable(decimal decimal.c)
add_executable(palindrome palindrome.c)
add_executable(Quicksort Quicksort.c)