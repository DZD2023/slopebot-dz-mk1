# 🧠 SlopeBot DZ MK1 – Masterdokumentation

Dieses Dokument bündelt alle bisherigen Erkenntnisse, Strukturen und Planungen rund um das Open-Source-Projekt „SlopeBot DZ MK1“.  
Es dient als zentrale Referenz für den Projektstand, Ausbau und Einstieg neuer Mitwirkender.

---

## 📌 1. Projektüberblick

- **Name:** SlopeBot DZ MK1
- **Ziel:** Modularer, 3D-druckbarer Rasenmähroboter für Hanglagen (bis 60°)
- **Plattform:** Umbau Husqvarna Automower 220 AC
- **Lizenz:** CC-BY-SA 4.0 + gewerbliche Nutzung mit Genehmigung
- **Leitung:** Dirk Zufall – Open Collaboration
- **Repository:** https://github.com/DZD2023/SlopeBot-DZ-MK1

---

## 🏗️ 2. Struktur & Komponenten

Siehe Ordnerstruktur im Repository (`README.md`).

### Fertig:
- Baseplate V2
- Akkuhalterung (185 × 75 × 55 mm)
- Gehäuse modular: SnapFit & Schraubverbindung
- Logo, Lizenz, README
- Explosionszeichnung vorhanden (PDF + Bild)

### 🔜 Erweiterung geplant:
- CAD-Daten finalisieren (STEP + STL)
- Dokumentation auf Printables ausspielen
- Erweiterungen: Balkenmähwerk, Hochgrasmäher, Tankmodul

---

## ⚡ 3. Energieversorgung

**Verbaute Komponenten:**
- Solarpanel: ECO-WORTHY ECOM-120 (120 W, 17.2 V)
- PWM-Laderegler: ECO-WORTHY 12/24 V
- Batterie: LANGZEIT AGM 12 V 120 Ah

**Verwendung:**
- Versorgung Dockingstation & Reinigungsmodul
- Spannungsüberwachung im Diagnose-Skript
- Optional auch für Sensorik/ESP32 via USB

---

## 🔌 4. Elektronik & Steuerung

- ESP32 als Hauptcontroller (Arduino IDE)
- I2C/SPI-Verkabelung vorgesehen
- Breakbeam-Sensor, Endschalter, Aktuatoren
- Optional: Raspberry Pi für WebApp / KI-Modul
- Selbstdiagnose-Funktion dokumentiert (Siehe `Diagnose_Konzept.md`)

---

## 🧪 5. Test & Diagnose

- Ablaufplan für Selbsttest (Motor, Sensoren, Spannung)
- Beispielcode (Pseudocode, vorbereitet für Arduino)
- Erweiterung für Display / LED / akustisches Signal möglich
- Noch zu tun: Einbindung ins Firmware-Repo `03_Firmware/`

---

## 🧾 6. Stückliste & Einkauf

Siehe `Stueckliste_SlopeBot_DZ_MK1_UPDATED.csv`

### Enthalten:
- Mechanische Teile (Baseplate, Halterung)
- Energiekomponenten (Solar, Batterie, Regler)
- Platzhalter für Sensoren, Aktuatoren, ESP32

### 🔜 Noch zu ergänzen:
- Konkrete Produktlinks
- Alternativen (Hersteller, Preisvergleich)
- Zeitaufwand & Druckdauer pro Teil

---

## 🧠 7. Entscheidungen & Strategie

Siehe: `SlopeBot_DZ_MK1_ENTSCHEIDUNGEN.md`

Behandelt:
- Designprinzipien
- Antrieb, Sensorik, Energie
- Zusatzmodule (optional)
- Steuerungsstrategie
- Zielgruppen & Nachhaltigkeit

---

## 📚 8. Projektfragen & Hintergründe

Siehe: `SlopeBot_DZ_MK1_FRAGEN_FINAL.md`

Enthält:
- FAQ zur Konstruktion
- Steuerung, Energie, Sensorik
- Modulkombinationen & Optionen
- Unterschiede zu anderen Systemen

---

## 📦 9. Veröffentlichung & Nächste Schritte

- [ ] GitHub-Release vorbereiten
- [ ] Printables-Upload mit Schritt-für-Schritt-Anleitung
- [ ] CAD-Daten ergänzen + druckbare Varianten erzeugen
- [ ] ESP32-Firmware in `03_Firmware/` einpflegen
- [ ] Videos, Skizzen, Sketchfab einbetten

---

## 📎 Verlinkte Kern-Dokumente

- `README.md`
- `REENTRY_DZSCHLAU.md`
- `SlopeBot_DZ_MK1_ENTSCHEIDUNGEN.md`
- `SlopeBot_DZ_MK1_FRAGEN_FINAL.md`
- `Stueckliste_SlopeBot_DZ_MK1_UPDATED.csv`
- `Diagnose_Konzept.md`

---

**Status:** fortlaufend gepflegt – Änderungen bitte dokumentieren.
