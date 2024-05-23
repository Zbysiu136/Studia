clc

k=0;
n=6000;

for i=1:n
a=randi(6);
b=randi(6);
if a==b
    k=k+1;
endif
endfor

k
p=k/n
