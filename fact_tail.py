def fact(n, t = 1):
    if n == 1:
       return t
    else:
       return fact(n-1, n * t)
def main():
    n = 5
    print(fact(n))            
main()    
