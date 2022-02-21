import math

D, H, W = map(int, input().split())
H_real = H*(math.sqrt(D**2/(H**2+W**2)))
W_real = W*(math.sqrt(D**2/(H**2+W**2)))
print(math.floor(H_real), math.floor(W_real))