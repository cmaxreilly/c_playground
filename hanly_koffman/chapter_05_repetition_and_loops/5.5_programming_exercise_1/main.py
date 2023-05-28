from math import sin, cos, pi

def main():
    # Variable declaration
    init_degree = 0
    final_degree = 360
    step_degree = 10

    # Display heading
    print("    Degrees    sine    cosine    ")
    i = init_degree
    while i <= final_degree:
        print("{blanks}{i}{blanks}{sine:.2f}{blanks}{cosine:.2f}".format(blanks = "    ", i = i, sine = sin(i * (pi/180)), cosine = cos(i * (pi/180))))
        i += step_degree
if __name__ == "__main__":
    main()
