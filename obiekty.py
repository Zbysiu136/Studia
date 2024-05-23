class div:
    def __init__(self, height=100, width=100, text='brak'):
        self.height = height
        self.width = width
        self.text = text
        print("utworzyłeś element o parametrach",self.height,"x",self.width, "teskt:", self.text)

    def gora(self, czynnik = 1):
        self.height = self.height * czynnik
        print("Nowa wysokość diva to", self.height)



a = div(height=100, text="ananasek", width="400")
b = div(height=400)
c = div()
c.gora(c.height)

print(c.height)
print(c.text)



##Innny kodzik



class document:
    class obraz:
        def __init__(self, height = 100, width = 100):
            self.height = height
            self.width = width
        
        def show(self):
            print(self.height, self.width)

    class tekst:
        def __init__(self, zawartosc = "brak"):
            self.zawartosc = zawartosc

        def show(self):
            print(self.zawartosc)


x = document.tekst("hui")

x.zawartosc = "anansek"

x.show()




    