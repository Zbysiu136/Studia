clc

display('Wprowadzamy macierz A.')
display('A=[ 1:7; 3*ones(1,7)]  ');
A=[ 1:7; 3*ones(1,7)]

display('Wstawiamy na poczatek wiersz 3 5 7 9 11 13 15.')
display('A=[ 3:2:15 ; A ]  ');
A=[ 3:2:15 ; A ]

display('Kasujemy piata kolumne.')
display('A(:,5)=[]  ');
A(:,5)=[]

display('Podnosimy wyrazy drugiego wiersza do kwadratu.')
display('A(2,:)=A(2,:).^2 ');
A(2,:)=A(2,:).^2

display('Doklejamy pod A dwukrotnosc macierzy A.')
display('A= [A; 2*A] ');
A= [A; 2*A]

display('Kasujemy wiersze o parzystych numerach.')
display('A(2:2:end ,:)=[] ');
A(2:2:end ,:)=[]

display('Odwracamy kolejnosc kolumn.')
display('A=A(:,6:-1:1 ) ');
A=A(:,6:-1:1 )

