import math
def d_f(n):
    a=1
    if n:       
        while n>0:
            a*=n
            n-=2
        return a
    else:
        return 1
try:   
    T=int(input())
    
except ValueError:
     print("Integer needed")
     exit()
ns=[]
for _ in range(T):
    try:
        n=int(input())
        if n<0:
            print(f"Input{i+1}:Non-negative integer needed, skipped")
            continue
        ns.append(n)
    except ValueError:
        print(f"Input{i+1}:Integer needed,skipped")
results=[]
for n in ns:      
        f=math.factorial(n)
        answer=2*f//d_f(n)
        results.append(answer)
for res in results:
    print(res)     
  

