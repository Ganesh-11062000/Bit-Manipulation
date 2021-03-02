# 1) Left Shift x by y bits: x << y
```
x << y == x*(2^y)
``` 
Ex. 5 << 3 => 5*(2^3) => 40

# 2) Right Shift x by y bits: x >> y
```
x >> y == x/(2*y) 
```
Ex. 50 >> 3 => 50/(2^3) => 6

# 3) Check if "i"th bit of a binary number n is set or not
- i is zero based
- for n = 6 (110) 
- b[0] = 0, b[1] = 1, b[2] = 1
```
n & ( 1 << i)
```
Ex. check 4th bit of 26 (11010) is set<br/>
26 & (1 << 4)

Ex: is n odd or even?<br/>
(n & 1) == 1 ? odd: even

# 4) Set "i"th bit of n
```
n = n | (1 << i)
```

# 5) Unset "i"th bit of n
```
n = n & ~(1 << i)
```

# 6) complement of n
```
complement_of_n = ~(n)
```
Ex. ~(2) = -3  (But How?)<br/>
for 8-bit numbers,<br/>
+2 = (0000 0010)<br/>
~2 = (1111 1101) {LHS}<br/>
+3 = (0000 0011)<br/>
-3 = (1111 1100)+1 = (1111 1101) {RHS}<br/>

# 7) Count number of set bits in n 
```
while(n>0)
{
  cnt = 0
  if(n&1)
     cnt++
  n = n>>1
}
```
Efficient Approach<br/>
```
cnt = 0
while(n>0)
{
  cnt++
  n = n&(n-1)
}
```





