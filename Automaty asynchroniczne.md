# Hazard
hazard usuwamy łącząc wszystkie zgrupowania 1 (lub 0 ale na nich nie pracuj ) widocznie w mapie karnough
# Wyścig niekrytyczny
Wyścig to sytuacja w której zmieniają się dwa lub więcej bity stanu
**bold-stany stabilne**,  *italics-wyścig*

| s\x | 00  | 01     | 11   | 10     | Y   |
| --- | --- | ------ | ---- | ------ | --- |
| 00  | 01  | 01     | *11* | **00** | 1   |
| 01  | 10  | **01** | 01   | **01** | 0   |
| 10  | 11  | 11     | 01   | **10** | 1   |
| 11  | 00  | **11** | 11   | **11** | 0   |
## kolumna 1, wejście 00
dla wejścia 00 automat nie ma stanu stabilnego (zawsze się zmienia), będzie działał jak zegar generując naprzemiennie wartości 0 i 1
## Kolumna 2, wejście 01
00->01->01 stan stabilny
10->11->11 stan stabilny
dla wejścia 01, automat będzie generował zawsze 1 lub 0 zależnie od tego w jakim był stanie gdy daliśmy mu 01
## Kolumna 3, wejście 11
00->*11, ale prędkość latchy jest różna więc trafi do 01 lub 11*
01->01->01 stan stabilny
10->01->01 stan stabilny
Tu widzimy wyścig nie krytyczny, niezależnie od prędkości latchy, i tak trafimy do tego samego stanu
## Kolumna 4, wejście 10
00->00->00 stan stabilny
01->01->01 stan stabilny
10->10->10 stan stabilny
# Wyścig Krytyczny

| s\x | 00     | 01     | 11     | 10     | Y   |
| --- | ------ | ------ | ------ | ------ | --- |
| 00  | 01     | 01     | *11*   | **00** | 0   |
| 01  | **01** | 10     | **01** | 00     | 1   |
| 11  | 01     | **11** | **11** | *00*   | 0   |
| 10  | 00     | 11     | **10** | 10     | 1   |
## Kolumna 1 wejście 00
00->01->01 stan stabilny
01->01 stan stabilny
11->01->01 stan stabilny
10->00->-01->01 stan stabilny
## kolumna 2 wejście 01
00->01->10->11->11 stan stabilny
01->10->11->11 stan stabilny
11->11 stan stabilny
10->11->11 stan stabilny
## Kolumna 3 wejście 11
00->*11 więc idzie 01 lub 10 obie opcje prowadzą do innych stanów stabilnych -> wyścig krytyczny, trzeba naprawić*
01->01 stan stabilny
11->11 stan stabilny
10->10 stan stabilny
## Kolumna 4 wejście 10
00->00 stan stabilny
01->00
11->00-> wyścig, zostawiłem do rozwiązania dla cb, jeśli chciałabyś przećwiczyć
10->10 stan stabilny
## Rozwiązywanie Wyścigu Krytycznego
Patrzymy na pierwotną, niezakodowaną tablice przejść, mając 4 możliwe stany użyliśmy 4 bitów do jej zakodowania, aby uniknąć wyścigu, dodamy kolejny bit -> 8 możliwych stanów

| s\x | 00  | 01  | 11  | 10  | Y   |
| --- | --- | --- | --- | --- | --- |
| s1  | s2  | s2  | s4  | s1  | 0   |
| s2  | s2  | s3  | s2  | s3  | 1   |
| s3  | s2  | s4  | s3  | s1  | 0   |
| s4  | s1  | s4  | s3  | s3  | 1   |
w tym przypadku możliwe jest uniknięcie wyścigu nie dodając bitu tylko zmieniając kodowanie, ale pokaże jak to zrobić metodą która zawsze działa

| s\x  | 00  | 01  | 11  | 10  | Y   |
| ---- | --- | --- | --- | --- | --- |
| s1   | s2  | s2  | s4  | s1  | 0   |
| s2   | s2  | s3  | s2  | s3  | 1   |
| s3   | s2  | s4  | s3  | s1  | 0   |
| s4   | s1  | s4  | s3  | s3  | 1   |
| *s5* |     |     |     |     |     |
| *s6* |     |     |     |     |     |
| *s7* |     |     |     |     |     |
| *s8* |     |     |     |     |     |

tym razem ==highlight== pokazuje nowe stany, *~~strikethrough~~* wyścig zostawiony tb na przećwiczenie (jeśli chcesz)
na razie nie zostały użyte, wyścig nadal istnieje

| s\x     | 00      | 01      | 11      | 10        | Y   |
| ------- | ------- | ------- | ------- | --------- | --- |
| 000     | 001     | 001     | *011*   | **000**   | 0   |
| 001     | **001** | 010     | **001** | 010       | 1   |
| 011     | 001     | **011** | **011** | ~~*000*~~ | 0   |
| 010     | 000     | 011     | **010** | 010       | 1   |
| ==110== |         |         |         |           |     |
| ==111== |         |         |         |           |     |
| ==101== |         |         |         |           |     |
| ==100== |         |         |         |           |     |
nowa zakodowana tablica przejść eliminująca wyścig krytyczny. Przejścia dla reszty nowych stanów nie zostały zapisane bo maszyna nigdy do nich nie trafia -> nie są potrzebne. Nowe stany przejściowe zostały wybrane arbitralnie, tylko dopilnowałem żeby zmieniały się o tylko 1 bit oraz żeby 000 (s1) przy wejściu 11 kończyło w 011 (s3) ponieważ tak wymaga tablica przejść

| s\x     | 00      | 01      | 11      | 10        | Y   |
| ------- | ------- | ------- | ------- | --------- | --- |
| 000     | 001     | 001     | ==100== | **000**   | 0   |
| 001     | **001** | 010     | **001** | 010       | 1   |
| 011     | 001     | **011** | **011** | ~~*000*~~ | 0   |
| 010     | 000     | 011     | **010** | 010       | 1   |
| ==110== |         |         |         |           |     |
| ==111== |         |         | ==011== |           |     |
| ==101== |         |         | ==111== |           |     |
| ==100== |         |         | ==101== |           |     |
### Kolumna 3, wejście 11 nowe
000->100->101->111->011->011 stan stabilny
001->001 stan stabilny
011->011 stan stabilny
010->010 stan stabilny
# Typy automatów asynchronicznych
## Wykorzystująca przerzutniki asynchroniczne
rozwiązujesz tak jak synchroniczne
## Ze sprzężeniem zwrotnym - na samych bramkach
zamiast funkcji kontrolujących przerzutniki, robisz układ bezpośrednio kontrolujący automat

| s\x | 0   | 1   |
| --- | --- | --- |
| 00  | 00  | 01  |
| 01  | 00  | 11  |
| 11  | 01  | 10  |
| 10  | 11  | 00  |
rysujesz mapę karnough dla każdego bitu stanu - analogicznie jak dla przełączników typu D, u mnie oznaczenia są $Q_0 Q_1$ i w tej kolejności są bity na tabeli dla przykładu Stan S2 $Q_0=0Q_1=1$
### Mapa dla $Q_0$
zauważ że niemożliwe jest usunięcie hazardu - nie można (chyba) połączyć wszystkich grup

| s\x | 0   | 1   |
| --- | --- | --- |
| 00  | 0   | 0   |
| 01  | 0   | 1   |
| 11  | 0   | 1   |
| 10  | 1   | 0   |
### Mapa dla $Q_1$
tutaj można usunąć hazard - w mapie karnough można łączyć "rogi"

| s\x | 0   | 1   |
| --- | --- | --- |
| 00  | 0   | 1   |
| 01  | 0   | 1   |
| 11  | 1   | 0   |
| 10  | 1   | 0   |
