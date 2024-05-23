clc

a=0;
b=2;

%liczba losowanych punktow
n=5000;


X=a:0.05:b;
Y=X.^3+1;
plot(X,Y,"linewidth",2,"color","red")
axis([-1,3,-1,10])
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red");
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red");
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red");

line([0,0],[0,9],"color","blue")
line([2,2],[0,9],"color","blue")
line([0,2],[0,0],"color","blue")
line([0,2],[9,9],"color","blue")

k=0;
for i=1:n
x=2*rand;
y=9*rand;
if (y>x^3+1)
line(x,y,"linewidth",2,"color","blue","marker","*")
else
line(x,y,"linewidth",2,"color","red","marker","*")
k=k+1;
endif
endfor

procent=k/n
pole=k/n *18






