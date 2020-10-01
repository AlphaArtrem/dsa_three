def gcd(a, b):
    if a == 0 or a == b:
        return b
    elif b == 0:
        return a
    else:
        if a > b:
            return gcd(b, a % b)
        else:
            return gcd(a, b % a)

if __name__ == "__main__":
    a = int(input("Enter first number : "))
    b = int(input("Enter second number : "))
    print(gcd(a, b))