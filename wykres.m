clc

X=-4:0.1:4;
Y=X.^2;
plot(X,Y,"linewidth",2,"color","green")
axis([-16,16,-16,16])
line([X(20),X(40)],[Y(20),Y(40)]);
line(4,8);

