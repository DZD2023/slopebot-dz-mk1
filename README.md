# SlopeBot DZ MK1 – FINAL_V22
**Version:** v0.0.22  
**Lizenz:** CC BY-NC-SA 4.0 (Hardware) / MIT (Software)  
**Letzte Aktualisierung:** 07.08.2025  
[NEU] Überarbeitete GitHub-optimierte README mit Projektstatus, To-Dos, CAD-Platzhaltern

## 📌 Projektziel & Vision
Der **SlopeBot DZ MK1** ist ein modularer, nachhaltiger DIY-Mähroboter für Hanglagen,  
basierend auf einem Husqvarna Automower 220 AC.

**Vision:**  
Die entwickelten Module sollen auf eine **breite Masse an vorhandenen Altgeräten**  
mit **minimalem zusätzlichem Aufwand** anwendbar sein.  
Ziel ist es, Altgeräten **neues Leben einzuhauchen**, sie funktional zu **modernisieren**  
und damit **zukunftssicher** zu machen.

**Grundprinzipien:**  
- Vollständige Modularität  
- Kostenoptimierung  
- Optionale Verschraubung aller relevanten Bauteile  
- Kompatibilität mit gängigen FDM-Druckern  
- Optimale strukturelle Ausrichtung – stützfreier Druck, wenn möglich  
- Zweisprachige Dokumentation (primär DE, ergänzend EN)  
- Maße ausschließlich metrisch  
- Frei verfügbar, **keine kommerzielle Nutzung ohne Genehmigung**

---

## 📥 Aktueller Projektstand

Der aktuelle Entwicklungsstand ist als **FINAL_V22 Release** auf GitHub verfügbar:

[➡️ FINAL_V22 Release herunterladen](https://github.com/DZD2023/SlopeBot-DZ-MK1/releases/tag/v0.0.22)

---

## 🛠 Technische Merkmale
- Basismodell: Husqvarna Automower 220 AC (Upcycling-Basis)
- Antrieb: modifizierbar für Hanglagen
- Steuerung: ESP32 + modulare Sensorik
- Energie: Akkubetrieb mit optionaler Solarladung
- Fertigung: 3D-Druck (PLA+, ABS, ASA, PETG, TPU, PET-CF, PC-Blend, Nylon, PVB)
- Mechanikbearbeitung: CNC-Fräse (Holz, Metall, 4. Achse für Rundbearbeitung)

---

## 📊 Projektstatus (Ampelanzeige)

| Bereich             | Status | Kommentar |
|--------------------|--------|-----------|
| Zieldefinition     | 🟢     | `ZIEL_FINAL.md` vollständig |
| Modularitätskonzept| 🟢     | vollständig umgesetzt |
| Dokumentation      | 🟢     | zweisprachig, strukturiert |
| Stücklisten        | 🟢     | Funktions- & Materiallisten vollständig |
| Bilder / Medien    | 🟢     | komplett vorhanden |
| CAD-Dateien        | 🟡     | Struktur vorhanden, Export STEP/STL ausstehend |
| Firmware           | 🟡     | Module „Selbsttest“ & „Tanksteuerung“ vorhanden, Erweiterung geplant |
| Software/WebApp    | 🔴     | Platzhalterstruktur vorhanden, Implementierung ausstehend |
| Aufbauanleitung    | 🟡     | Umbauanleitung DE/EN vorhanden, SlopeBot-Komplettaufbau fehlt |

---

## 📂 Projektstruktur

```
SlopeBot_DZ_MK1/
├── 00_Dokumentation/
├── 01_Hardware/
├── 02_Elektronik/
├── 03_Firmware/
├── 04_Software/
├── 05_Dokumentation/
├── 06_Checklisten/
├── 07_Zubehör_Optional/
├── 08_Tools/
└── 99_Media/
```

---

## 📄 Dokumentation & Medien

- **Masterdokument:** [`MASTERDOKUMENT.md`](00_Dokumentation/MASTERDOKUMENT.md)
- **Bilddokumentation:** [`Bilddokumentation_SlopeBot_DZ_MK1.pdf`](00_Dokumentation/Bilddokumentation_SlopeBot_DZ_MK1.pdf)
- **Projektzusammenfassung:** [`Projektzusammenfassung.pdf`](00_Dokumentation/SlopeBot_DZ_MK1_Projektzusammenfassung.pdf)
- **CAD-Viewer:**  
  - [Sketchfab-Link hier einfügen]  
  - [Thangs-Link hier einfügen]

---

## 📜 Lizenz

- **Hardware:** [Creative Commons BY-NC-SA 4.0](LICENSE_HARDWARE)  
  *(Namensnennung – Nicht kommerziell – Weitergabe unter gleichen Bedingungen)*
- **Software:** [MIT License](LICENSE_SOFTWARE)  
  *(Freie Nutzung, inklusive kommerziell, mit Haftungsausschluss)*

---

## 📌 Offene Aufgaben / To-Dos
- CAD-Export aller finalen Module (STEP/STL) aus Fusion 360
- Implementierung der WebApp / Mobile App
- Erstellung vollständiger SlopeBot-Aufbauanleitung (DE/EN)
- QR-Code-Integration für 3D-Viewer in Dokumentation
- Erweiterung Firmware (Selbstdiagnose, Sensorintegration)
- Pflege CHANGELOG aller Versionen
- Veröffentlichung auf GitHub nach Abnahme
- Optional: Printables-Upload vorbereiten
