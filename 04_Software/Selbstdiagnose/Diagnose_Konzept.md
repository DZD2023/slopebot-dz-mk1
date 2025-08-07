# Selbstdiagnose-Konzept – SlopeBot DZ MK1

Diese Routine testet die wichtigsten Systemfunktionen beim Start:

- ✅ Akkuspannung prüfen
- ✅ Motorlauf links/rechts testen
- ✅ Sensorsignal (IR/Ultraschall) lesen
- ✅ I2C-Verbindung testen
- ✅ LEDs kurz durchschalten

## Beispiel (Pseudocode):

```python
def self_diagnosis():
    print("Starte Selbstdiagnose...")
    if check_voltage() < 7.0:
        warn("⚠️ Akku schwach!")
    else:
        ok("✅ Akku OK")
    ...
```

Erweiterungen: Buzzer, Displayausgabe, Logfile, Bluetooth-Fehlerreport
