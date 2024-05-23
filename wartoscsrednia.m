clc

a=0;
b=2;

%liczba losowanych punktow
n=1000;


% OBRAZKI

%rysunek figury (i wykresu)
X=a:0.05:b;
Y=X.^3+1;
plot(X,Y,"linewidth",2,"color","red")
axis([-1,3,-1,10])
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red");
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red");
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red");


%rysunek prostokata
line([0,0],[0,9],"color","blue")
line([2,2],[0,9],"color","blue")
line([0,2],[0,0],"color","blue")
line([0,2],[9,9],"color","blue")

%METODA MONTE CARLO
S=0;
for i=1:n
%losujemy punkt przedzialu
x=2*rand;
S=S+(x^3+1);
endfor

srw=S/n
calka=srw*(b-a)







