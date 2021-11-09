def factorial(n):
    if n>0:
        return n*factorial(n-1)
    else: return 1

def rearrange(n,k):
    return factorial(n)/factorial(n-k)

three_digit_number = rearrange(5,3)

two_digit_number = rearrange(4,2)

four_digit_number = rearrange(5,4)

if three_digit_number > two_digit_number and three_digit_number > four_digit_number:
    print("Трьох-значних більше")
elif two_digit_number > four_digit_number:
    print("Дво-значних більше")
else: print ("Чотирьох-значних більше")
