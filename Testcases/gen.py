#generate test cases for the problem:
#first line: n, m
#second line: a1 a2 ... an with 1 <= ai <= 100
#third line: b1 b2 ... bm with 1 <= bi <= 100
#save it to input.txt

import random
import sys

def gen(m,n):
    with open("input.txt", "w") as f:
        f.write(str(m) + " " + str(n)+"\n")
        for i in range(m):
            f.write(str(random.randint(1,1000000000)) + " ")
        f.write("\n")
        for i in range(n):
            f.write(str(random.randint(1,1000000000)) + " ")
        f.write("\n")
        f.close()
if __name__ == "__main__":
    gen(int(sys.argv[1]), int(sys.argv[2]))
    
