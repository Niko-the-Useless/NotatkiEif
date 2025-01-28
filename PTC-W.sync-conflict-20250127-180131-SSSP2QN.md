# Przerzutniki
## Jednotaktowe
### SR
- S ustawia stan wyjściowy jako 1, R na 0. Jeśli S i R mają 1, to przerzutnik jest niezdefiniowany.

| S   | R   | $Q_0$ | $Q_1$ |
| --- | --- | ----- | ----- |
| 0   | 0   | $Q_0$ | $Q_0$ |
| 0   | 1   | 0     | 1     |
| 1   | 0   | 1     | 0     |
| 1   | 1   | -     | -     |

## Dwutaktowe
### D
- Ma 2 wejścia - zegar i Data, Wartość D zostanie zapamiętana gdy zegar jest na stanie wysokim

| Clock | D   | $Q_0$ | $Q_1$ |
| ----- | --- | ----- | ----- |
| 0     | x   | x     | $Q_0$ |
| 1     | 0   | x     | 0     |
| 1     | 1   | x     | 1     |
### T
- Rejestr JK w którym wejścia są połączone

| T   | $Q_1$  |
| --- | ------ |
| 0   | $Q_0$  |
| 1   | -$Q_0$ |

### JK
- 2 Wejścia J i K - działa jak SR ale eliminuje stan niezdefiniowany przy 11 (odwraca stan)

| J   | K   | $Q_1$  |
| --- | --- | ------ |
| 0   | 1   | $Q_0$  |
| 0   | 1   | 0      |
| 1   | 0   | 1      |
| 1   | 1   | -$Q_0$ |

# Rejestry
## Rodzaje
- Szeregowe
	 umożliwiające szeregowe wprowadzenie i wyprowadzenie danych
- Równoległe
	 umożliwiające równoległe wprowadzenie i wyprowadzenie danych
- Szeregowo-równoległe
	 umożliwiające szeregowe wprowadzenie i równoległe wyprowadzenie danych
- Równoległo-szeregowe
	 umożliwiające równolegle wprowadzenie i szeregowe wyprowadzenie danych
## Funkcje dodatkowe
- przesunięcie wartości
- wpisanie wartości
## Budowa
Składają się z połączonych przerzutników
## Zastosowanie
Zapis danych, buforowanie danych, dekodowanie i kodowanie danych
# Liczniki
## Klasyfikacja
- Szeregowe
	 zmiany stanów zachodzą sekwencyjnie(po koleji)
- Równoległe
    Zmiany stanów zachodzą jednocześnie
## Rodzaje
- Synchroniczne
- Asynchroniczne
- liczące w przód
- liczące w tył
- rewersyjne
- Pierścieniowe
- Programowalne
- Kaskadowe
## Funkcje dodatkowe
- wyzerowanie
- zmiana kierunku
- wprowadzenie konkretnych danych
- zmiana kroku licznika
## Budowa
- z odpowiednio połączonych przerzutników
## Zastosowanie
- Pomiar częstotliwości
- generowanie sygnałów zegarowych
- wykrywanie sekwencji
# Układ sekwencyjny 
## Definicja
rodzaj układów cyfrowych charakteryzujący się tym, że stan wyjść zależy od stanu wejść układu oraz od poprzedniego stanu
## Budowa
Składa się z funkcji wzbudzeń, pamięci wewnętrznej i funkcji wyjściowej
## Sposoby opisu działania
tablica przejść, graf
# Układ sekwencyjny synchroniczny synteza
## Automat Moore'a
wyjście układu jest funkcją stanu wewnętrznego
## Automat Mealy'ego
wyjście jest funkcją stanu wewnętrznego i sygnałów wejściowych
## Synteza
1. Minimalizacja stanów
2. zaprojektowanie funkcji wzbudzeń
3. zaprojektowanie funkcji wyjściowej
# Układ sekwencyjny asynchroniczny synteza
## Hazard
- Chwilowe błędne stany na wyjściach układów spowodowane niezerowym czasem propagacji
  #### Rozwiązanie
	dodanie dodatkowych grup łączących wszystkie grupy na mapie Karnaugh
## Wyścig
- Stan w którym 2 lub więcej sygnałów zmieniają się w tym samym czasie a ostateczny wynik zależy od tego który zmieni się pierwszy
  #### Rozwiązanie
	dodanie dodatkowych stanów przejściowych
## Synteza
1. Minimalizacja stanów
2. zaprojektowanie funkcji wzbudzeń (opcjonalne)
3. zaprojektowanie funkcji wyjściowej
## Rodzaje
1. układ ze sprzężeniem zwrotnym
2. bramki (SR)
# Pamięci 

| Typ Pamięci | Działanie                                    | Cechy                                                                                   | Zalety                                                         | Wady                                                 |
| ----------- | -------------------------------------------- | --------------------------------------------------------------------------------------- | -------------------------------------------------------------- | ---------------------------------------------------- |
| SRAM        | używa<br>bistabilnych przerzutników          | Szybki zapis i odczyt<br>Ulotna<br>wysokie zużycie prądu<br>niska gęstość               | Szybka<br>Stabilna                                             | Wysoka cena<br>Wysokie zużycie prądu<br>             |
| DRAM        | zapisuje dane jako napięcie na kondensatorze | Wolniejsza niż SRAM, ulotna, Wyższa gęstość, Niższa cena<br>wymaga odnowienia           | Wysoka gęstość<br>Tania                                        | Wolniejsza<br>Wysokie zużycie prądu                  |
| PROM        | Wykorzystuje bezpieczniki do zapisu          | Nie ulotna<br>jednorazowo programowalna<br>wymaga specjalnych narzędzi do programowania | Łatwa<br>niska cena                                            | Jednorazowo<br>programowalna                         |
| EPROM       | tranzystor MOS z dwiema bramkami             | Nie ulotna<br>reprogramowalna<br>powolna w programowaniu                                | Reprogramowalna<br>Niezawodna                                  | Limitowane cykle programowania                       |
| EEPROM      | tranzystor MOS z dwiema bramkami             | Nie ulotna<br>reprogramowalna elektronicznie<br>wolniejsza niż ram                      | Łatwa w programowaniu<br>umożliwia usuwanie pojedynczych bitów | Limitowane cykle programowania<br>wolniejsza niż ram |
| FRAM        | Zmiana polaryzacji ferromagnetyka            | Nie ulotna<br>szybki zapis<br>niezawodna                                                | utrzymuje dane bez prądu<br>szybka<br>niezawodna               | Wysoki koszt<br>niska gęstość                        |
| MRAM        | zapisuje dane magnetycznie                   | Nie ulotna<br>bardzo szybka operacja<br>NIezawodna                                      | utrzymuje dane bez prądu<br>niezawodna                         | Wysoki koszt<br>niska gęstość                        |
