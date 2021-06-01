fout = open("four.out","w")
def four(n):
    if n - 4 != 0:
       if n % 10 == 0:
           four(n // 10)
       elif n % 10 == 4:
           four(n // 10)
       else:
           four(n * 2)
       fout.write(f"-->{n}")
       print(f"-->{n}", end="")

def main():
    f = open("four.in","r")
    arr = [[int(x) for x in line.split()] for line in f]
    for num in arr:
        fout.write("4")
        four(num[0])
        fout.write("\n")
        print("")
main()
