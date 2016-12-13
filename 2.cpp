int LED_PIN=13;

void setup () {                    // 初始化副程式，程式起始時僅執行一次
    pinMode (LED_PIN, OUTPUT);     // 以數位輸出方式啟用Pin13
}

void loop () {                     // loop副程式，重複不斷執行
    digitalWrite (LED_PIN, HIGH);  // 打開LED（發光二極管）
    delay (1000);                  // 等待一秒，delay內含數值1000，代表延遲1000毫秒，即一秒。
    digitalWrite (LED_PIN, LOW);   // 關閉LED
    delay (1000);                  // 等待一秒
}                                  // loop副程式結束

