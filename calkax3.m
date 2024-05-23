clc

a=0;
b=2;
n=4;


X=a:0.05:b;
Y=X.^3+1;
plot(X,Y,"linewidth",2,"color","red")
axis([-1,3,-1,9])
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red");
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red");
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red");

V=linspace(a,b,n+1);
U=V.^3+1;
wartosc=trapz(V,U)

line(V,U, "color","blue");

line([V(1),V(n+1)],[0,0], "color","blue");
for i=1:n+1
  line([V(i),V(i)],[0,U(i)], "color","blue");

endfor




