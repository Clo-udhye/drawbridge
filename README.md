# DRAWBRIDGE
:bridge_at_night:Drawbridge Realization:bridge_at_night:

1. **Project Introduction**
   - [Drawbridge](#drawbridge)
2. **Project Procedure**
   - [Development Period](#development-period)
   - [Developer](#developer)
   - [Development Environment](#development-environment)
3. **Project Result**
   - [Sequence of Operation](#sequence-of-operation)
   - [Structure Design](#structure-design)
   - [Circuit Diagram](#circuit-diagram)

_____
# [1] Project Introduction
## Drawbridge
- Drawbridge : bridge that can be pulled up to allow ships to pass underneath it
- Make drawbridge and ship real using Arduino!

# [2] Project Procedure
## Development Period
04/2016 - 06/2016
## Developer
6 People
## Development Environment
- C
- Arduino IDE
- Components
  - Arduino uno board R3
  - Bluetooth (HC-06)
  - Infrared distance sensor (Sharp 2Y0A21)
  - Servo motor (SG-90)
  - DC motor (MT-001)
  - LED
  - Photoresistor (GL-5537)
  - Buzzer (FQ-027)

# [3] Project Result
## Sequence of Operation
1. A ship is comming to drawbridge.
2. Infrared distance sensors on bridge detect distance from the ship.
3. Buzzers ring when the ship comes closer to bridge.
4. The vehicle blockers works to stop cars from passing through the bridge.
5. The operator on control tower opens the drawbridge using bluetooth.
6. The ship passes under bridge.
7. The operator closes the drawbridge.
8. The vehicle blockers rise to let cars drive on the bridge again.

## Structure Design
![structure-design](/static/image/structure-design.png)

## Circuit Diagram
### Ship
![circuit-diagram-ship](/static/image/circuit-diagram-ship.png)

### Bridge
![circuit-diagram-bridge01](/static/image/circuit-diagram-bridge01.png)
![circuit-diagram-bridge02](/static/image/circuit-diagram-bridge02.png)
