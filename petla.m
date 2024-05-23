clc

n=input('Podaj n: ');

%S= sum((1:n).^2)

S=0;

 % for i=1:n
 %   S=S+i^2;
 % endfor

 %i=1;
  %while (i<n+1)
  %  S=S+i^2;
   % i=i+1;
  %endwhile
  i=1;
  do
    S=S+i^2;
    i=i+1;
  until i==n+1
S
