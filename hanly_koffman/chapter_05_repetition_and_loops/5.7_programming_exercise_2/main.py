
def main():
    for multiplicand in range(0, 9):
        for multiplier in range(0,9):
            product = multiplicand * multiplier
            print(f"{product:2d}  ", end="")
        print("\n")
if __name__ == "__main__":
    main()
