clc

a=0;
b=2;
n=100;

X=a:0.1:b;
Y=X.^3+1;
%rysujemy wykres x^3+1
plot(X,Y,"linewidth",2,"color","red")
axis([a-1,b+1,-1,max(Y)+1]);

%dorysowujemy reszte brzegow figury
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red")
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red")
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red")

%rysujemy n trapezow

%"gora trapezow"
V=linspace(a,b,n+1);
U=V.^3+1;
line(V,U,"color","blue")

%"reszta trapezow"
line([V(1),V(length(V))],[0,0],"color","blue")
for i=1:n+1
line([V(i),V(i)],[0,U(i)],"color","blue")
endfor

%metoda trapezow
calka=trapz(V,U)
