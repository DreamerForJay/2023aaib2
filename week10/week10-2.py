#week10-2cpp 輾轉相除法 最大公因數
#a大的 b中的 c小的a%b greatest common divisor
def gcd(a,b):
  if(a==0): return b
  if(b==0): return a #有人會省略這一行
  return gcd(b,a%b) #老二生即變老大
a =int(input("請輸入a:"))
b =int(input("請輸入b:"))
print("最大公因數是:",gcd(a,b));
