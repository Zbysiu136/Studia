clc
display('Wprowadzamy wektor v.')
display('v= [ -4:3:26 10:-2:-6]')
v= [ -4:3:26 10:-2:-6]

display('Wyswietlamy elementy na miejscach nieparzystych.')
display('v( 1:2:length(v))')
v( 1:2:length(v))

display('Sumujemy kwadraty elementow parzystych.')
display('sum(v(mod(v,2)==0).^2)')
sum(v(mod(v,2)==0).^2)

display('Usuwamy elementy na miejscach podzielnych przez 3.')
display('v(3:3:length(v))=[]')
v(3:3:length(v))=[]


