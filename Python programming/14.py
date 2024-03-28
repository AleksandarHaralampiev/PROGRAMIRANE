user_input = input("Enter a sequence of symbols: ")

def is_palindrome(s):
    return s == s[::-1]

def find_palindromes(s):
    count = 0
    largest = ""
    for i in range(len(s)):
        for j in range(i+2, len(s)+1):
            s1 = s[i:j]
            if is_palindrome(s1):
                count += 1
                if len(s1) > len(largest):
                    largest = s1
    return count, largest

count, largest = find_palindromes(user_input)
if count == 0 or largest == "":
    print("Nqma palindromi :(.")
else:
    print(f"ima {count} palindroma, nai golemiq e '{largest}'.")