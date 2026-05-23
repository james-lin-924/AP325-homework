def eval(x, y, P):
    if y == 0:
        return 1
    if y % 2 == 0:
        temp = eval(x, y // 2, P)
        return (temp * temp) % P
    else:
        return (x * eval(x, y - 1, P    )) % P

if __name__ == "__main__":
    x,y,P=map(int, input().split())
    print(eval(x, y, P))