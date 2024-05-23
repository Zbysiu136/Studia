clc

a=0;
b=2;
n=5000;

X=a:0.1:b;
Y=X.^3+1;
%rysujemy wykres x^3+1
plot(X,Y,"linewidth",2,"color","red")
axis([a-1,b+1,-1,max(Y)+1]);

%dorysowujemy reszte brzegow figury
line([X(1),X(1)],[0,Y(1)],"linewidth",2,"color","red")
line([X(length(X)),X(length(X))],[0,Y(length(X))],"linewidth",2,"color","red")
line([X(1),X(length(X))],[0,0],"linewidth",2,"color","red")

%rysujemy prostokat
line([0,2],[0,0],"color","blue")
line([0,2],[9,9],"color","blue")
line([0,0],[0,9],"color","blue")
line([2,2],[0,9],"color","blue")

%losujemy punkty z prostokata
%i sprawdzamy czy leza w czerwonej figurze

k=0;

for i=1:n

%losujemy mieszkanca prostokata
x=2*rand;
y=9*rand;

%pytamy go gdzie mieszkanca


%jesli powie, ze nad krzywa, to jest to punkt niebieski
if (y>x^3+1)
line(x,y,"color","blue","linewidth",2,"marker","*")

%w przeciwnym wypadku mieszka pod krzywa i jest punktem czerwonym

else
line(x,y,"color","red","linewidth",2,"marker","*")
%zliczamy ile trafilismy czerwonych
k=k+1;
endif
endfor

%wyniki ankiety
procent=k/n
calka=k/n*18


