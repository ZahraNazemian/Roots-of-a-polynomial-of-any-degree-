# Roots-of-a-polynomial-of-any-degree-
Polynom-Nullstellenfinder

Überblick: 

Dieses Programm liest die Koeffizienten eines Polynoms aus einer TXT-Datei, konstruiert das Polynom, berechnet alle Nullstellen und speichert die Ergebnisse in einer weiteren TXT-Datei. Es funktioniert für Polynome beliebigen Grades und ist somit ein vielseitiges Werkzeug für mathematische Analysen und Experimente.

Funktionen: 


Flexible Eingabe: Liest Polynom-Koeffizienten aus einer einfachen TXT-Datei.



Automatische Nullstellenberechnung: Findet alle Nullstellen (reell und komplex) für Polynome beliebigen Grades.



Einfache Ausgabe: Speichert die berechneten Nullstellen in einer TXT-Datei zur weiteren Verwendung.



Benutzerfreundlich: Einfach Koeffizienten angeben und die Nullstellen automatisch erhalten!

Anwendung


Koeffizienten vorbereiten:
Erstelle eine TXT-Datei (z.B. koeffizienten.txt) mit den Koeffizienten deines Polynoms, jeweils eine Zahl pro Zeile oder durch Leerzeichen getrennt.



Programm ausführen:
Das Programm liest die Koeffizienten, konstruiert das Polynom und berechnet die Nullstellen.



Ergebnisse ansehen:
Die Nullstellen werden in einer TXT-Datei (z.B. nullstellen.txt) im Projektordner gespeichert.

Beispiel

Eingabe (koeffizienten.txt):

1
-3
2

(Entspricht dem Polynom: 1x² - 3x + 2)

Ausgabe (nullstellen.txt):

2
1

(Die Nullstellen des Polynoms)

Erste Schritte: 
Lege alle Dateien in einen gemeinsamen Ordner.



Kompiliere das Programm (z.B. mit g++ main.cpp polynomial.cpp io.cpp -o polynull).



Führe die erstellte Datei aus und folge den Anweisungen.

Anpassung:
Du kannst den Grad und die Koeffizienten im Eingabefile beliebig ändern, um verschiedene Polynome zu untersuchen.



Die Nullstellen-Funktion kann auch separat in anderen Projekten verwendet werden.

Viel Spaß!

Speichere einfach alle Dateien in einem Ordner, führe das Programm aus und entdecke die Nullstellen deiner Polynome!
