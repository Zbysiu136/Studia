clc
display('Wprowadzamy wektor v.')
display('v= [ -4:3:23 8:-2:-8]')
v= [ -4:3:23 8:-2:-8]

display('Wyswietlamy elementy na miejscach parzystych.')
display('v(2:2:length(v))')
v(2:2:length(v))

display('Sumujemy kwadraty elementow parzystych.')
display('sum(v(mod(v,2)==0).^2)')
sum(v(mod(v,2)==0).^2)

display('Usuwamy elementy na miejscach podzielnych przez 3.')
display('v(3:3:length(v))=[]')
v(3:3:length(v))=[]
