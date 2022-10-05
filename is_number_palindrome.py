from cmath import log10
from math import floor


def is_number_palindrome(number):
    if(number/10 == 0):
        return True
    number_of_digits=floor(log10(number))+1
    