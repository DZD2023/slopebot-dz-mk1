# Tests

## serial_output_test.ino

Dieser Arduino-Unit-Test bindet die Firmware `../main.ino` ein und prüft,
ob beim Start die Meldung `SlopeBot DZ MK1 Test-Upload erfolgreich.` an die
serielle Schnittstelle gesendet wird. Die Ausgabe von `Serial` wird dabei
abgefangen, damit der Test automatisch verifiziert werden kann.

### Ausführung

1. [Arduino CLI](https://arduino.github.io/arduino-cli/latest/) und das
   passende Board-Paket installieren.
2. In dieses Verzeichnis wechseln und den Sketch kompilieren und hochladen:

   ```bash
   arduino-cli compile --fqbn <FQBN> serial_output_test.ino
   arduino-cli upload  --fqbn <FQBN> -p <PORT> serial_output_test.ino
   ```

3. Serielle Konsole mit `115200` Baud öffnen. Der Test startet automatisch
   und meldet das Ergebnis.
