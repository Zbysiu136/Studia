clc

n=input('Podaj liczbe n: ');

%SPOSOB BEZ PETLI

%S= sum((1:n).^2)

%PETLA FOR

S=0;
 %for i=1:n
  % S=S+i^2;
 %endfor
 %S

 %PETLA WHILE
%i=1;
 % while (i<n+1)
  %  S=S+i^2;
   % i=i+1;
  %endwhile
  %S

%PETLA DO UNTIL

i=1;
 do
   S=S+i^2;
   i=i+1;
 until (i>n)
 S
