def is_palindrome(n):
    return str(n) == str(n)[::-1]

def find_largest_palindrome():
    largest_palindrome = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
    return largest_palindrome

# Find the largest palindrome
result = find_largest_palindrome()

# Save the result in the file without newline or extra space
with open("102-result", "w") as file:
    file.write(str(result))
