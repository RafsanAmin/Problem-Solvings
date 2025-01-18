import math

def main():
  T = int(input(""))
  for _ in range(T):
    N, X, K = map(int,input().split())
    total_sum = 0.0000000
    for i in range(2, N + 2):
        total_sum += float(math.log(i))
    logX = math.log(X)
    logK = math.log(K)
    result = (total_sum + logX) / logK
    rounded_result = math.ceil(result)
    print(f"{rounded_result}")

if __name__ == "__main__":
    main()