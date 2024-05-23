clc


X=-4:0.1:4;
Y=X.^2;
plot(X,Y,"linewidth",2,"color","red")
axis([-20,20,-20,20]);
%line([0,0],[-20,20],"color","green")
%line([-20,20],[0,0],"color","green")
line(5,-5,"color","blue","marker","*")
