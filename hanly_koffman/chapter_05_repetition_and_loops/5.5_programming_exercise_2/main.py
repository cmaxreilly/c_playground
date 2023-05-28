
def main():
    instruct()
    print("Enter your lower limit >> ")
    lower_limit = int(input())
    print("Enter your upper limit >> ")
    upper_limit = int(input())


    inches = lower_limit
    while inches < upper_limit:
        print("{spaces}{inches:>2}{spaces:>4}{cm}".format(spaces = "    ", inches = inches, cm = inches * 2.54))
        inches += 5

def instruct():
    print("This program takes a lower limit and an upper limit in inches")
    print("and prints out a table of inches to centimeters. Enter your ")
    print("your lower limit at the prompt below.")

if __name__ == "__main__":
    main()
