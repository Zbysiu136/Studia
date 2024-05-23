clc
n=10000;
k=0;
for i=1:n
x=rand;
y=rand;
if (y>sqrt(1-x^2))
  k=k+1;
endif
endfor

liczbapi=4*k/n



