def fibonacci_value(n):
    if n < 0:
        print("n can't be less than 0")
    elif n <= 2:
        print(n - 1)
    else:
        second_last = 0
        last = 1
        fibonacci_num = second_last + last
        for _ in range(3, n):
            second_last = last
            last = fibonacci_num
            fibonacci_num = second_last + last
        return fibonacci_num

if __name__ == "__main__":
    n = int(input("Enter the postion of fibonnaci number (n) to calculate : "))
    print(fibonacci_value(n))
