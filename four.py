def four(n):
  if n - 4 != 0:
    if n % 10 == 0:
       four(n//10)
    elif n % 10 == 4:
       four(n//10)
    else:
       four(n * 2)
    print(f" --> { n }", end = "")

def main():
    print("4 ", end="")
    four(123)
main()
