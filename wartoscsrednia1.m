clc

a=0;
b=2;
n=10000;

X=a:0.1:b;
Y=X.^3+1;
%rysujemy wykres x^3+1
plot(X,Y,"linewidth",2,"color","red")
axis([a-1,b+1,-1,max(Y)+1]);

%dorysowujemy reszte brzegow figury
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red")
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red")
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red")

%przeprowadzamy ankiete

S=0;
for i=1:n
x=2*rand;
S=S+x^3+1;
endfor
wartsr=S/n
calka=wartsr*(b-a)





%rysujemy prostokat
line([0,2],[0,0],"color","blue")
line([0,2],[wartsr,wartsr],"color","blue")
line([0,0],[0,wartsr],"color","blue")
line([2,2],[0,wartsr],"color","blue")




