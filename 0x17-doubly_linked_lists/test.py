#!/usr/bin/python3
def is_palindrome(number):
    return str(number) == str(number)[::-1]

def largest_palindrome_product():
    max_palindrome = 0

    for i in range(999, 99, -1):  # 3-digit numbers
        for j in range(i, 99, -1):  # To avoid duplicate products
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product

    return max_palindrome

result = largest_palindrome_product()
print("The largest palindrome made from the product of two 3-digit numbers is:", result)

