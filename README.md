\# \[과제 9] 숫자 야구 멀티플레이 게임



언리얼 엔진 5와 C++로 구현한 멀티플레이 숫자 야구 게임입니다.  

서버에서 중복 없는 3자리 숫자를 만들고, 두 플레이어가 번갈아 숫자를 입력해 승부를 가립니다.



---



\##  개발 환경



\- Unreal Engine 5.5.4 (C++)

\- Visual Studio

\- 프로젝트명: Assignment9



---



\##  구현 기능



\### 1. 필수 기능



\- 랜덤 숫자 생성

&nbsp; - NumberRightAnswer, MakeSecretNumber()

&nbsp; - 1~9 사이 중복 없는 3자리 정답 숫자 생성



\- 입력 검증 \& 판정

&nbsp; - IsValidGuessNumber():  

&nbsp;   3자리 / 1~9 / 중복 없는 숫자인지 형식만 검사

&nbsp; - MakeGuessResult():  

&nbsp;   정답과 비교해 `S/B/OUT` 문자열(예: 2S0B, OUT`) 생성



\- 시도 횟수 / 승패 관리

&nbsp; - UpGuessCount():  

&nbsp;   플레이어 시도 횟수 증가, 턴 진행에 사용

&nbsp; - JudgeGame():  

&nbsp;   3S 달성 여부 / 시도 횟수 초과로 승리, 무승부 판단

&nbsp; - ResetGame():  

&nbsp;   새 정답 생성, 시도 횟수 \& 시간 초기화, New Round! 출력



---



\### 2. 도전 기능 (턴 / 타이머)



\- 턴 시간 \& 순서 관리

&nbsp; - TurnTimeLimit, TurnTickTimerHandle, CurrentTurnPlayer

&nbsp; - TickTurnTimer(): 현재 턴 플레이어의 남은 시간 감소, 0초 시 다음 턴으로 넘김

&nbsp; - UpdateAllPlayersTimerAlarm():  

&nbsp;   모든 플레이어의 닉네임 / 시도 횟수 / 남은 시간을  

&nbsp;   AlarmText(위젯에 바인딩된 변수)로 UI에 표시



\- \*\*턴이 아닐 때 입력 제한\*\*

&nbsp; - PrintChattingMessage()에서  

&nbsp;   CurrentTurnPlayer가 아닌 플레이어는  

&nbsp;   `"It's not your turn!"`만 보이도록 처리



---



\## 실행 방법



1\. 숫자 야구 맵을 연다.

2\. Play 설정에서

&nbsp;  - Number of Players = 2

&nbsp;  - Net Mode = Play As Listen Server

3\. 각 클라이언트에서 채팅으로 숫자를 입력해  

&nbsp;  랜덤 정답, S/B/OUT, 시도 횟수, 턴 타이머, 승리/무승부 동작을 확인할 수 있다.

---



\##  어려웠던 점



\- 타이머와 턴 로직을 어느 클래스에서 관리할지(GameMode 중심으로 정리) 고민

\- 현재 턴 플레이어만 입력 가능하게 만들고,  

&nbsp; 턴이 끝났을 때 자동으로 다음 플레이어에게 넘기는 흐름 구현

\- 모든 플레이어에게 동일한 턴/타이머 정보가 보이도록  

&nbsp; AlarmText(위젯 바인딩 변수)를 한 번에 갱신하는 방식으로 정리



