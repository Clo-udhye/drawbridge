# DRAWBRIDGE
:bridge_at_night:도개교 구현 프로젝트:bridge_at_night:

1. **프로젝트 소개**
   - [도개교](#도개교)
2. **프로젝트 진행**
   - [개발 기간](#개발-기간)
   - [개발 인원](#개발-인원)
   - [개발 환경](#개발-환경)
3. **프로젝트 결과**
   - [전체 동작설명](#전체-동작설명)
   - [다리와 배의 모형도](#다리와-배의-모형도)
   - [회로도](#회로도)

_____
# [1] 프로젝트 소개
## 도개교
- 도개교 : 배가 지나갈 때, 다리가 한쪽 또는 양쪽으로 들어올려져 통행이 가능하도록 만든 다리이다.
- 아두이노를 이용해서 도개교와 배를 구현했다.

# [2] 프로젝트 진행
## 개발 기간
04/2016 - 06/2016
## 개발 인원
[Clo-udhye](https://github.com/Clo-udhye), [dev-ujin](https://github.com/dev-ujin), [osh3516](https://github.com/osh3516) 외 3명

## 개발 환경
- C
- Arduino IDE
- 사용부품
  - Arduino uno board R3
  - Bluetooth (HC-06)
  - 거리감지센서 (Sharp 2Y0A21)
  - Servo motor (SG-90)
  - DC motor (MT-001)
  - LED
  - 조도감지센서 (GL-5537)
  - Buzzer (FQ-027)

# [3] 프로젝트 결과
## 전체 동작설명 
1. 배가 다리에 접근한다.
2. 다리의 거리감지센서가 배와의 거리를 감지한다.
3. 배가 다리에 가까이 접근하면 부저가 울린다.
4. 관제탑의 관제사는 차량차단기를 작동해 다리위로 향하는 자동차의 이동을 통제한다.
5. 관제사는 블루투스를 이용해 다리를 올린다.
6. 배가 다리 밑을 지나간다.
7. 관제사는 다리를 내린다.
8. 차량차단기가 열려 자동차는 다리위를 지난다.

## 다리와 배의 모형도
![모형도](/static/image/structure-design.png)

## 회로도
### 배
![회로도-배](/static/image/circuit-diagram-ship.png)

### 다리
![회로도-다리1](/static/image/circuit-diagram-bridge01.png)
![회로도-다리2](/static/image/circuit-diagram-bridge02.png)
